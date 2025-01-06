from _common import codeforces_list_letters, codeforces_get_path
from pathlib import Path
from signal import signal, SIGTERM, SIGINT
from sys import argv, exit
from termcolor import colored, cprint
import subprocess


template_path = Path('templates/problem.cpp')
snippet_path = Path('.vscode/copro.code-snippets')

def signal_handler(signum, frame):
    print(f"Signal received, exiting")
    exit(0)

def commit_if_modified(file_path, message):
    git_output = subprocess.run(['git', 'diff', '--exit-code', file_path], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if git_output.returncode == 0:
        return
    subprocess.run(['git', 'add', file_path])
    subprocess.run(['git', 'commit', '-m', message])

def commit_all():
    commit_if_modified(template_path, "Update template")
    commit_if_modified(snippet_path, "Update snippets")
    git_file_list = subprocess.run(['git', 'ls-files', '-o', '--exclude-standard', '--full-name'], stdout=subprocess.PIPE).stdout.decode().split('\n')
    for file in git_file_list:
        if file.endswith('.cpp') and file.startswith('codeforces/'):
            parts = file.split('/')
            problem_number = parts[-2]
            problem_letter = parts[-1][0]
            commit_codeforces_problem(problem_number, problem_letter)

def commit_codeforces_problem(problem_number, problem_letter):
    problem_path = codeforces_get_path(problem_number, problem_letter)
    source_file = problem_path.with_suffix(".cpp")
    executable_file = problem_path.with_suffix(".exe")
    if executable_file.exists():
        subprocess.run(['git', 'add', source_file, template_path])
        subprocess.run(['git', 'add', source_file, snippet_path])
        subprocess.run(['git', 'commit', '-m', f"Solved Codeforces {problem_number}{problem_letter}"])
        print(f"Committed {colored(problem_number, 'green')}{colored(problem_letter, 'green')}")
    else:
        print(f"Executable not found for {problem_number}{problem_letter}")

def commit_codeforces(args):
    problem_number = args[-1]
    if problem_number[-1].isalpha():
        problem_letters = [problem_number[-1]]
        problem_number = problem_number[:-1]
        mode = 'single'
    else:
        problem_letters = codeforces_list_letters(problem_number)
        mode = 'all'

    for letter in problem_letters:
        commit_codeforces_problem(problem_number, letter)

def run_hackerrank(args):
    pass

def main():
    signal(SIGTERM, signal_handler)
    signal(SIGINT, signal_handler)
    site_name = argv[1]
    if site_name == 'all':
        commit_all()
    elif site_name == 'cf' or site_name == 'codeforces':
        commit_codeforces(argv[2:])
    else:
        colored_site_name = colored(site_name, 'red', attrs=['bold'])
        print(f"Unknown site name: {colored_site_name}")
        exit(1)

if __name__ == '__main__':
    main()
