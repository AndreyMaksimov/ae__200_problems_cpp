# AlgoExpert/Strings/Easy/CMakeLists.txt

option(PalindromeCheck_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(palindrome-check)

option(CaesarCipherEncryptor_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(caesar-cipher-encryptor)

option(RunLengthEncoding_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(run-length-encoding)

option(CommonCharacters_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(common-characters)

option(GenerateDocument_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(generate-document)

option(FirstNonRepeatingCharacter_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(first-non-repeating-character)

option(Semordnilap_discover_tests "Add problem tests to a workflow" ON)
add_subdirectory(semordnilap)
