#include <algorithm>
#include <iostream>
#include <string>
#include <set>

auto main() -> int {
    auto names = std::set<std::string>();

    for (auto i = 0; i < 10; i++) {
        auto newName = std::string();
        std::cin >> newName;
        names.insert(newName);
    }

    for (auto name : names) {
        std::cout << name << ' ';
    }

    return 0;
}


/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void showNames(int amount);

int main() {
    showNames(10);
    return 0;
}

void showNames(int amount){
    std::string name = "";
    std::vector<std::string> array;
    for(int i = 1; i < 11; i++){
        std::cout << "Enter " << i << " name: ";
        std::cin >> name;
        array.push_back(name);
    }

    std::ranges::sort(array);
    auto toErase = std::ranges::unique(array);
    array.erase(toErase.begin(), toErase.end());

    for(auto x : array){
        std::cout << x << " ";
    }


}*/
