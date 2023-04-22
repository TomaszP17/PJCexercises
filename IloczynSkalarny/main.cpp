#include <iostream>
#include <vector>

auto dotProduct(std::vector<double> array1, std::vector<double> array2) -> double{
    double result = 0.0;

    for(int i = 0; i < array1.size(); i++){
        result += array1[i] * array2[i];
    }
    return result;
}

int main() {
    auto array1 = std::vector<double>() = {1,2,3,4,5};
    auto array2 = std::vector<double>() = {1,2,3,4,5};
    std::cout << dotProduct(array1, array2);
    return 0;
}
