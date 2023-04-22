#include <iostream>
#include <vector>

void eraseNBiggest(std::vector<int> array, int n) {
    std::sort(array.begin(), array.end());
    for(int i = 0; i < n; i++){
        array.pop_back();
    }
    for(auto x : array){
        std::cout << x << " ";
    }

}

int main() {
    std::vector<int> array {1, 5, 3, 2, 4};
    eraseNBiggest(array, 3);

    return 0;
}
