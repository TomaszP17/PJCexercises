#include <iostream>
#include <vector>

template <typename TypeName>
auto sum(std::vector<TypeName> const& vec){
    auto result = TypeName{};
    for(auto const& x: vec){
        result += x;
    }
    return result;
}

int main() {
    std::vector<int> vec1{1,2,3,4,5};
    std::vector<double> vec2{1.0,2.5,3.0,4.0,5.0};
    std::vector<std::string> vec3{"a","l","a","m"," "};
    std::cout << sum(vec1);
    std::cout << '\n';
    std::cout << sum(vec2);
    std::cout << '\n';
    std::cout << sum(vec3);

    return 0;
}
