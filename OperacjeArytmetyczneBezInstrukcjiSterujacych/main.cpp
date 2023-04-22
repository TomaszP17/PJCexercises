#include <iostream>
#include <map>
#include <functional>

int main() {
    std::cout << "Wczytaj dwie liczby i znak operacji" << std::endl;
    int number1 = 0, number2 = 0;
    char character = ' ';
    std::cin >> number1 >> number2 >> character;

    std::map<char, std::function<int(int, int) >> mapa{
            {'+', [](int a, int b){return a + b;}},
            {'-', [](int a, int b){return a - b;}},
            {'*', [](int a, int b){return a * b;}},
            {'/', [](int a, int b){return a / b;}}
    };
    std::cout << mapa[character](number1, number2) << '\n';
    return 0;
}
