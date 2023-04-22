#include <iostream>
#include <string>

bool bothSortedOrNot(std::string firstWord, std::string secondWord){
    std::string first = firstWord;
    std::sort(first.begin(), first.end());
    std::string second = secondWord;
    std::sort(second.begin(),second.end());

    if(first == firstWord && second == secondWord){
        return true;
    }else if(first != firstWord && second != secondWord){
        return true;
    }else{
        return false;
    }
}

int main() {
    std::cout << bothSortedOrNot("aba", "cdc");
    return 0;
}
