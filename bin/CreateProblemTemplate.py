#
import os
from os.path import abspath, dirname

ALGOEXPERT_QUESTIONS_URL = 'https://www.algoexpert.io/questions/'
ALGOEXPERT_ROOT_DIR = 'AlgoExpert'
CATEGORY = 'Arrays'
DIFFICULTY = 'Easy'
PROBLEM_NAME = 'transpose-matrix'

project_path = dirname(dirname(abspath(__file__)))


def create_module_name(problem_name: str) -> str:
    """
    Replace dash separated words by capitalized ones
    Example:
    'that-is-problem' -> 'ThatIsProblem'
    :param problem_name: example 'that-is-problem'
    :return: example 'ThatIsProblem'
    """
    to_upper = True
    mn_result = ''
    for ch in problem_name:
        if ch == '-':
            to_upper = True
            continue
        if to_upper:
            ch = ch.upper()
            to_upper = False
        mn_result += ch
    return mn_result


def create_h_file(path, name):
    pass


def create_cpp_file(path, name):
    pass


def create_test_file(path, name):
    pass


def create_cmake_file(path, name):
    pass


def update_group_cmake_file(group_path, name):
    pass


# create problem subdir
problems_group_path = os.path.join(project_path, ALGOEXPERT_ROOT_DIR, CATEGORY, DIFFICULTY)
problem_dir_path = os.path.join(problems_group_path, PROBLEM_NAME)
os.makedirs(problem_dir_path, exist_ok=True)

# create module name
problem_module_name = create_module_name(PROBLEM_NAME)
print(problem_module_name)

