#include <iostream>
#include <vector>

int countEvens(std::vector<int> array);

auto main() -> int {
    std::cout << countEvens({1, 2, 3, 4, 5}) << '\n'
              << countEvens({}) << '\n'
              << countEvens({1, -3, 5}) << '\n'
              << countEvens({0, 2, -4, 8}) << '\n';

    /*auto array = std::vector<std::string>{"ala", "kot", "papiez"};

    std::string word = "kot";

    std::reverse(word.begin(), word.end());

    std::cout << word << '\n';

    for(auto x : array){
        std::reverse(x.begin(), x.end());
        std::cout << x << ' ';
    }*/

    return 0;
}

int countEvens(std::vector<int> array){
    int counter = 0;
    for(auto x: array){
        if(x % 2 == 0){
            counter++;
        }
    }
    return counter;
}