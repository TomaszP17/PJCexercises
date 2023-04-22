#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    auto firstFive = std::vector<int>();
    auto secondFive = std::vector<int>();

    int number = 0;
    std::cout << "First Five:\n";
    for(int i = 0; i < 5; i++){
        std::cin >> number;
        firstFive.push_back(number);
    }
    std::cin.clear();
    std::cout << "Second Five:\n";
    for(int i = 0; i < 5; i++){
        std::cin >> number;
        secondFive.push_back(number);
    }

    std::ranges::sort(firstFive);
    std::ranges::sort(secondFive);

    if(firstFive == secondFive){
        std::cout << "Equals";
    }else{
        std::cout << "Not equals";
    }

    return 0;
}
