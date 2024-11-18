# AlgoExpert/Strings/Easy/CMakeLists.txt

option(PalindromeCheck_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(palindrome-check)

option(CaesarCipherEncryptor_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(caesar-cipher-encryptor)

option(RunLengthEncoding_discover_tests "Add problem tests to a workflow" ON)
add_subdirectory(run-length-encoding)
