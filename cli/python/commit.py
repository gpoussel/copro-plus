from _common import codeforces_list_letters, codeforces_get_path
from pathlib import Path
from signal import signal, SIGTERM, SIGINT
from sys import argv, exit
from termcolor import colored, cprint
import subprocess

def signal_handler(signum, frame):
    print(f"Signal received, exiting")
    exit(0)

def commit_codeforces(args):
    problem_number = args[-1]
    if problem_number[-1].isalpha():
        problem_letters = [problem_number[-1]]
        problem_number = problem_number[:-1]
        mode = 'single'
    else:
        problem_letters = codeforces_list_letters(problem_number)
        mode = 'all'
    
    template_path = Path('templates/problem.cpp')
    for letter in problem_letters:
        problem_path = codeforces_get_path(problem_number, letter)
        source_file = problem_path.with_suffix(".cpp")
        executable_file = problem_path.with_suffix(".exe")
        if executable_file.exists():
            subprocess.run(['git', 'add', source_file, template_path])
            subprocess.run(['git', 'commit', '-m', f"Solved Codeforces {problem_number}{letter}"])

    pass

def run_hackerrank(args):
    pass

def main():
    signal(SIGTERM, signal_handler)
    signal(SIGINT, signal_handler)
    site_name = argv[1]
    if site_name == 'cf' or site_name == 'codeforces':
        commit_codeforces(argv[2:])
    else:
        colored_site_name = colored(site_name, 'red', attrs=['bold'])
        print(f"Unknown site name: {colored_site_name}")
        exit(1)

if __name__ == '__main__':
    main()
