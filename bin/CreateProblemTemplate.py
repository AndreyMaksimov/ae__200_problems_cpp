# bin/CreateProblemTemplate.py
import os

ALGOEXPERT_QUESTIONS_URL = 'https://www.algoexpert.io/questions/'
ALGOEXPERT_ROOT_DIR = 'AlgoExpert'
CATEGORY = 'Arrays'
DIFFICULTY = 'Easy'
PROBLEM_NAME = 'transpose-matrix'

CMAKE_LISTS = 'CMakeLists.txt'

project_path = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


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
    # TODO
    pass


def create_cpp_file(path, name):
    # TODO
    pass


def create_test_file(path, name):
    # TODO
    pass


def create_cmake_file(abspath, path, name):
    cmake_path = os.path.join(abspath, CMAKE_LISTS)
    with open(cmake_path, mode='w') as f:
        print(f'# {path}/{CMAKE_LISTS}', file=f)
        print(file=f)
        print(f'add_tests_for_problem({name})', file=f)
    pass


def update_group_cmake_file(group_path, name):
    cmake_path = os.path.join(group_path, CMAKE_LISTS)
    if not os.path.exists(cmake_path):
        raise FileNotFoundError(f'error - {cmake_path} does not exist')
    line_to_append = f'add_subdirectory({name})'
    with open(cmake_path, mode='r') as f:
        for line in f:
            if line_to_append in line:
                print(f'warning: "{line_to_append}" already exists in {cmake_path}')
                return
    with open(cmake_path, mode='a') as f:
        print(f'{line_to_append}', file=f)
    return


problems_group_abspath = os.path.join(project_path, ALGOEXPERT_ROOT_DIR, CATEGORY, DIFFICULTY)
problem_dir_abspath = os.path.join(problems_group_abspath, PROBLEM_NAME)
problem_dir_path = os.path.join(ALGOEXPERT_ROOT_DIR, CATEGORY, DIFFICULTY, PROBLEM_NAME)
os.makedirs(problem_dir_abspath, exist_ok=True)

# create module name
problem_module_name = create_module_name(PROBLEM_NAME)
print(problem_module_name)

update_group_cmake_file(problems_group_abspath, PROBLEM_NAME)
create_cmake_file(problem_dir_abspath, problem_dir_path, problem_module_name)
