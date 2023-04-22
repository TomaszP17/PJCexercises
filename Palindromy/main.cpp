#include <iostream>
#include <string>
#include <ios>

bool isPalindrome(std::string word);

auto main() -> int {
    std::cout << std::boolalpha
              << isPalindrome("kajak") << '\n'
              << isPalindrome("ala") << '\n'
              << isPalindrome("programowanie") << '\n';

    return 0;
}

bool isPalindrome(std::string word){
    return word == std::string(word.rbegin(), word.rend());
}
