from os import linesep
from pathlib import Path
from signal import signal, SIGTERM, SIGINT
from sys import exit
from termcolor import colored, cprint
from _common import codeforces_parse_url
import http.server
import simplejson as json

BIND_HOST = '127.0.0.1'
BIND_PORT = 10046

def signal_handler(signum, frame):
    print(f"Signal received, exiting")
    exit(0)

def generate_cpp_header(data):
    header = f"// {data['group']}\n"
    header += f"// {data['name']}\n"
    return header.strip()

def process_received_json(data_string):
    data = json.loads(data_string)
    url = data['url']
    name = data['name']
    if url.startswith('https://codeforces.com/'):
        name, problem_path = codeforces_parse_url(url, name)
        colored_name = colored(name, 'light_green', attrs=['bold'])
        print(f"Codeforces problem: {colored_name}")
    elif url.startswith('https://www.hackerrank.com/challenges/'):
        # https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true
        url = url.replace(r'?isFullScreen=true', '')
        problem_slug = url.split('/')[-2]
        problem_path = Path(f"hackerrank/problems-{problem_slug[0]}/{problem_slug}")
        colored_name = colored(problem_slug, 'light_green', attrs=['bold'])
        print(f"HackerRank problem: {colored_name}")
    else:
        colored_url = colored(data['url'], 'red', attrs=['bold'])
        print(f"Received problem from unknown URL: {colored_url}")
        print(json.dumps(data, indent=4))
        return
    
    problem_folder = problem_path.parent
    problem_folder.mkdir(parents=True, exist_ok=True)
    problem_content = Path("templates/problem.cpp").read_text(encoding='utf-8').replace("\r\n", "\n").replace("// HEADER", generate_cpp_header(data))
    source_file = problem_path.with_suffix(".cpp")
    if source_file.exists():
        cprint(f"Problem file already exists: {source_file}", 'grey', attrs=['bold'])
    else:
        source_file.write_text(problem_content, encoding='utf-8')
        colored_path = colored(source_file, 'green', attrs=['bold'])
        cprint(f"Created problem file: {colored_path}")

    for idx, test in enumerate(data['tests']):
        test_input_path = problem_path.with_suffix(f".sample{idx + 1}.in")
        test_output_path = problem_path.with_suffix(f".sample{idx + 1}.out")
        if test_input_path.exists() and test_output_path.exists():
            cprint(f"Test files #{idx + 1} already exists", 'grey', attrs=['bold'])
            continue
        test_input_path.write_text(test['input'], encoding='utf-8')
        test_output_path.write_text(test['output'], encoding='utf-8')
        colored_test_number = colored(f"#{idx + 1}", 'blue', attrs=['bold'])
        print(f"Saved test files {colored_test_number}")
    print()
    print()

class CompetitiveCompanionHandler(http.server.BaseHTTPRequestHandler):
    def log_message(self, format, *args):
        # Suppression request logging
        pass

    def do_POST(self):
        self.data_string = self.rfile.read(int(self.headers['Content-Length']))
        self.send_response(200)
        self.end_headers()
        try:
            process_received_json(self.data_string)
        except Exception as e:
            print(f"Error processing data: {e}")
            print(json.dumps(json.loads(self.data_string), indent=4))

def run_server():
    with http.server.ThreadingHTTPServer((BIND_HOST, BIND_PORT), CompetitiveCompanionHandler) as server:
        server.serve_forever()

def main():
    signal(SIGTERM, signal_handler)
    signal(SIGINT, signal_handler)
    run_server()

if __name__ == '__main__':
    main()
