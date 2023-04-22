#include <iostream>

template <typename Projection>
auto repeat(int n, Projection projection){
    for(int i = 0; i < n; i++){
        projection();
    }
}

int main() {
    repeat(3, []()->auto{
        std::cout << "wynik" << " ";
    });
    return 0;
}
