#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {

    std::cout << "Enter 5 words:\n";
    std::vector<std::string> array;
    std::string name = "";
    for(int i = 0; i < 5; i++){
        std::cin >> name;
        array.push_back(name);
    }
    std::ranges::sort(array);

    for(auto x : array){
        std::cout << x << " ";
    }

    return 0;
}
