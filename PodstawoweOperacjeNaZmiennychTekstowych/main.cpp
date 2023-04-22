#include <iostream>

int main() {
    std::cout << "Enter one word: " << std::endl;
    std::string word = "";
    std::cin >> word;

    std::cout << word[0] << '\n';
    std::cout << "'" << word[word.size()-1] << "'" << '\n';

    return 0;
}
