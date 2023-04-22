#include <iostream>
#include <vector>

std::vector<std::string> getNamesFrom(std::vector<std::string> &array){
    for(auto x : array){
        if (!(x[0] >= 65 && x[0] <= 90))

    }
    return array;
}

int main() {
    std::vector<std::string> array{"Ala", "Tomek", "warszawa", "dom"};
    getNamesFrom(array);
    for(auto x : array){
        std::cout << x << " ";
    }
    return 0;
}
