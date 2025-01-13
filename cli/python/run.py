from _common import codeforces_get_path, codeforces_parse_problem_name
from pathlib import Path
from signal import signal, SIGTERM, SIGINT
from sys import argv, exit
from termcolor import colored, cprint
import subprocess

def signal_handler(signum, frame):
    print(f"Signal received, exiting")
    exit(0)

def print_output(result):
    has_output = False
    if result.stdout.strip() != '':
        colored_stdout = colored("stdout:", 'grey', attrs=['bold'])
        print(f"{colored_stdout} {result.stdout.strip()}")
        has_output = True

    if result.stderr.strip() != '':
        colored_stderr = colored("stderr:", 'grey', attrs=['bold'])
        print(f"{colored_stderr} {result.stderr.strip()}")
        has_output = True
    
    if not has_output:
        colored_no_output = colored("No Output", 'grey', attrs=['bold'])
        print(colored_no_output)

def run_codeforces(args):
    forced = '!' in args
    problem_number = args[0]
    mode, problem_number, problem_letters = codeforces_parse_problem_name(problem_number)
    
    prefix = "  " if mode == 'all' else ""
    for letter in problem_letters:
        if mode == 'all':
            colored_problem = colored(f"{problem_number}{letter}", 'cyan', attrs=['bold'])
            print(f"Problem {colored_problem}")
        
        problem_path = codeforces_get_path(problem_number, letter)
        source_file = problem_path.with_suffix(".cpp")
        executable_file = problem_path.with_suffix(".exe")
        if not source_file.exists():
            colored_path = colored(source_file, 'red', attrs=['bold'])
            print(f"{prefix}File not found: {colored_path}")
            continue
        if not executable_file.exists() or executable_file.stat().st_mtime < source_file.stat().st_mtime:
            subprocess_result = subprocess.run([
                'g++', '-Wall', '-Wextra', '-Wconversion', '-static',
                '-DONLINE_JUDGE', '-Wl,--stack=268435456', '-O2',
                '-std=c++23', '-lstdc++exp', source_file, '-o', executable_file])
            if subprocess_result.returncode != 0:
                colored_path = colored(source_file, 'red', attrs=['bold'])
                print(f"{prefix}Compilation failed for: {colored_path} (return code {subprocess_result.returncode})")
                continue
        
        got_an_error = False
        for child in problem_path.parent.iterdir():
            if not child.is_file():
                continue
            if child.name.startswith(f"{letter}.sample") and child.name.endswith('.in'):
                test_name = child.name.replace(f"{letter}.sample", '').replace('.in', '')
                colored_test_path = colored(f"#{test_name}", 'blue', attrs=['bold'])

                test_result = None
                try:
                    test_result = subprocess.run([executable_file], input=child.read_text(encoding='utf-8'), text=True, capture_output=True, timeout=10)
                except subprocess.TimeoutExpired:
                    print(f"{prefix}Test {colored_test_path}: {colored('Time Limit Exceeded', 'red', attrs=['bold'])}")
                    got_an_error = True
                    continue
                except Exception as e:
                    print(f"{prefix}Test {colored_test_path}: {colored('Runtime Error', 'red', attrs=['bold'])}")
                    got_an_error = True
                    continue
                if test_result.returncode != 0:
                    print(f"{prefix}Test {colored_test_path}: {colored('Runtime Error', 'red', attrs=['bold'])}")
                    got_an_error = True
                    print_output(test_result)
                    continue
                test_output = test_result.stdout.strip()
                test_expected_output_file = child.parent / child.name.replace('.in', '.out')
                if test_expected_output_file.exists():
                    test_expected_output = (child.parent / child.name.replace('.in', '.out')).read_text(encoding='utf-8').strip()
                    if test_output == test_expected_output:
                        print(f"{prefix}Test {colored_test_path}: {colored('OK', 'green', attrs=['bold'])}")
                    else:
                        print(f"{prefix}Test {colored_test_path}: {colored('Wrong Answer', 'red', attrs=['bold'])}")
                        colored_expected_output = colored(test_expected_output, 'grey', attrs=['bold'])
                        cprint(f"{prefix}Expected:", 'yellow', attrs=['bold'])
                        print(test_expected_output)
                        print()
                        cprint(f"{prefix}Got:", 'yellow', attrs=['bold'])
                        print_output(test_result)
                        got_an_error = True
                else:
                    print(f"{prefix}Test {colored_test_path}: {colored('?', 'yellow', attrs=['bold'])}")
                    print_output(test_result)
        
        if mode == 'single' and (not got_an_error or forced):
            # Copy the source file content into the clipboard
            subprocess.run(['clip.exe'], input=source_file.read_text(encoding='utf-8'), encoding='utf-8', text=True, capture_output=False)
            print("Source code copied to clipboard")
            if len(problem_number) <= 4:
                problem_type = "contest"
            else:
                problem_type = "gym"
            print(f" → https://codeforces.com/{problem_type}/{problem_number}/submit?submittedProblemIndex={letter}&programTypeId=91")

        if mode == 'all':
            if got_an_error:
                break
            print()

    pass

def run_hackerrank(args):
    pass

def main():
    signal(SIGTERM, signal_handler)
    signal(SIGINT, signal_handler)
    site_name = argv[1]
    if site_name == 'cf' or site_name == 'codeforces':
        run_codeforces(argv[2:])
    elif site_name == 'hr' or site_name == 'hackerrank':
        run_hackerrank(argv[2:])
    else:
        colored_site_name = colored(site_name, 'red', attrs=['bold'])
        print(f"Unknown site name: {colored_site_name}")
        exit(1)

if __name__ == '__main__':
    main()
