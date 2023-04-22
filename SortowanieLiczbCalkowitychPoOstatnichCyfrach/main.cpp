#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

int main() {

    auto compare = [](int f, int s) -> bool {
        int fl = f%10;
        int sl = s%10;
        if(fl > sl)
            return true;
        else
            return false;
    };

    auto lastNumber = [](int number) -> int {
        return number%10;
    };

    int alfa = 123, beta = 321;
    std::cout << compare(alfa, beta) << '\n';

    std::vector<int> array{32,12,4,123,99,23,10};
    std::ranges::sort(array, compare, lastNumber);

    for(auto x : array){
        std::cout << x << " ";
    }
    return 0;
}
