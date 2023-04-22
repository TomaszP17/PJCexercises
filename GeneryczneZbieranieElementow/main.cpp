#include <iostream>
#include <vector>

template <typename TypeName, typename Object, typename Projection>
auto fold(std::vector<TypeName> vec, Object object, Projection projection)-> Object{
    for(const auto& x : vec){
        object = projection(object, x);
    }
    return object;
}

int main() {
    auto strings = std::vector<std::string>{
            "abc", "defghi", "jk", "lmno"
    };

    auto sum_of_sizes = fold(
            strings, std::size_t(0),
            [](std::size_t i, std::string s) {
                return i + s.size();
            }
    );

    auto concatenated_string = fold(
            strings,
            std::string(""),
            [](std::string sum, std::string next) {
                return sum + next;
            }
    );

    std::cout << sum_of_sizes << '\n'
              << concatenated_string;
}
