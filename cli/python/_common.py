from pathlib import Path

# Codeforces

def codeforces_parse_url(url):
    if url.startswith('https://codeforces.com/problemset/'):
        # https://codeforces.com/problemset/problem/1/A
        problem_number = url.split('/')[-2].rjust(4, '0')
        problem_letter = url.split('/')[-1]
    elif url.startswith('https://codeforces.com/gym/'):
        # https://codeforces.com/gym/100001/problem/A
        problem_number = url.split('/')[-3]
        problem_letter = url.split('/')[-1]
    elif url.startswith('https://codeforces.com/contest/'):
        # https://codeforces.com/contest/1/problem/A
        problem_number = url.split('/')[-3].rjust(4, '0')
        problem_letter = url.split('/')[-1]
    else:
        raise ValueError(f"Unknown URL: {url}")
    
    problem_path = codeforces_get_path(problem_number, problem_letter)
    return (f"{problem_number}{problem_letter}", problem_path)

def codeforces_get_path(problem_number, problem_letter):
    problem_number = codeforces_normalize_problem_number(problem_number)
    return Path(f"codeforces/problems-{str(problem_number)[:-2]}xx/{problem_number}/{problem_letter}")

def codeforces_normalize_problem_number(problem_number):
    if len(problem_number) <= 4:
        problem_number = problem_number.rjust(4, '0')
    elif len(problem_number) != 6:
        raise ValueError(f"Invalid problem number: {problem_number}")
    return problem_number

def codeforces_list_letters(problem_number):
    problem_number = codeforces_normalize_problem_number(problem_number)
    letters = []
    for child in Path(f"codeforces/problems-{problem_number[:-2]}xx/{problem_number}").iterdir():
        if not child.is_file() or not child.name.endswith('.cpp'):
            continue
        letter = child.name.replace('.cpp', '')
        if len(letter) == 1:
            letters.append(letter)
    return letters
