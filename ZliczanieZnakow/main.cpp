#include <iostream>
#include <vector>
#include <string>

int countChars(std::vector<char> array, char character);
int countChars(std::string array, char character);

auto main() -> int {
    std::cout << countChars(std::vector<char>{'a', 'l', 'a'}, 'a') << '\n'
              << countChars("", 'a') << '\n'
              << countChars(std::string{'k', 'a', 'j', 'a', 'k'}, 'a') << '\n'
              << countChars(std::string("kajak"), 'k') << '\n'
              << countChars(std::vector<char>{'k', 'a', 'j', 'a', 'k'}, 'j') << '\n'
              << countChars("kajak", 'x') << '\n';

    return 0;
}

int countChars(std::vector<char> array, char character){
    int counter = 0;

    for(auto x : array){
        if(x == character){
            counter++;
        }
    }
    return counter;
}
int countChars(std::string array, char character){
    int counter = 0;

    for(auto x : array){
        if(x == character){
            counter++;
        }
    }
    return counter;
}

