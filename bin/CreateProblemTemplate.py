# bin/CreateProblemTemplate.py
import os

ALGOEXPERT_QUESTIONS_URL = 'https://www.algoexpert.io/questions/'
ALGOEXPERT_ROOT_DIR = 'AlgoExpert'
CATEGORY = 'Arrays'
DIFFICULTY = 'Hard'
PROBLEM_NAME = 'sweet-and-savory'

CMAKE_LISTS = 'CMakeLists.txt'

project_path = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
problem_url = ALGOEXPERT_QUESTIONS_URL + PROBLEM_NAME


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


def uncapitalize_first(word: str):
    return word[:1].lower() + word[1:]


problem_namespace = f'algoExpert::{uncapitalize_first(CATEGORY)}'


def create_h_file(path, name, overwrite=True):
    file_path = os.path.join(path, f'{name}.h')
    if os.path.exists(file_path):
        print(f'create_h_file warning: "{file_path}" already exists')
        if not overwrite:
            print(f'create_h_file warning: nothing to do')
            return
    with open(file_path, mode='w') as f:
        print('#pragma once', file=f)
        print('#include <vector>', file=f)
        print(file=f)
        print(f'namespace {problem_namespace} {{', file=f)
        print('\tusing std::vector;', file =f)
        print('}', file=f)


def create_cpp_file(path, name, overwrite=True):
    file_path = os.path.join(path, f'{name}.cpp')
    if os.path.exists(file_path):
        print(f'create_cpp_file warning: "{file_path}" already exists')
        if not overwrite:
            print(f'create_cpp_file warning: nothing to do')
            return
    with open(file_path, mode='w') as f:
        print(f'// {problem_url}', file=f)
        print('//', file=f)
        print(f'// #{CATEGORY}', file=f)
        print(f'// #{DIFFICULTY}', file=f)
        print(file=f)
        print(f'#include "{name}.h"', file=f)
        print(file=f)
        print(f'namespace {problem_namespace} {{', file=f)
        print('}', file=f)


def create_test_file(path, name, overwrite=True):
    file_path = os.path.join(path, f'{name}_test.cpp')
    if os.path.exists(file_path):
        print(f'create_test_file warning: "{file_path}" already exists')
        if not overwrite:
            print(f'create_test_file warning: nothing to do')
            return
    with open(file_path, mode='w') as f:
        print(f'#include "{name}.h"', file=f)
        print('#include "gtest/gtest.h"', file=f)
        print(file=f)
        print('namespace {', file=f)
        print('}', file=f)


def create_cmake_file(abspath, path, name, overwrite=True):
    cmake_path = os.path.join(abspath, CMAKE_LISTS)
    if os.path.exists(cmake_path):
        print(f'create_cmake_file warning: "{cmake_path}" already exists')
        if not overwrite:
            print(f'create_cmake_file warning: nothing to do')
            return
    with open(cmake_path, mode='w') as f:
        print(f'# {path}/{CMAKE_LISTS}', file=f)
        print(file=f)
        print(f'add_tests_for_problem({name})', file=f)


def cmake_comment_subdirectories(path: str):
    with open(path, mode='r') as f:
        file_lines = f.readlines()
    with open(path, mode='w') as f:
        for line in file_lines:
            if line.startswith('add_subdirectory'):
                line = '#' + line
            f.write(line)


def update_group_cmake_file(group_path, name):
    cmake_path = os.path.join(group_path, CMAKE_LISTS)
    if not os.path.exists(cmake_path):
        raise FileNotFoundError(f'error - {cmake_path} does not exist')
    line_to_append = f'add_subdirectory({name})'
    with open(cmake_path, mode='r') as f:
        for line in f:
            if line_to_append in line:
                print(f'update_group_cmake_file warning: "{line_to_append}" already exists in {cmake_path} nothing todo')
                return
    cmake_comment_subdirectories(cmake_path)
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

to_overwrite = False

update_group_cmake_file(problems_group_abspath, PROBLEM_NAME)
create_cmake_file(problem_dir_abspath, problem_dir_path, problem_module_name, overwrite=to_overwrite)
create_h_file(problem_dir_abspath, problem_module_name, overwrite=to_overwrite)
create_cpp_file(problem_dir_abspath, problem_module_name, overwrite=to_overwrite)
create_test_file(problem_dir_abspath, problem_module_name, overwrite=to_overwrite)
