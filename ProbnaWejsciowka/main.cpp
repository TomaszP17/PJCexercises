#include <iostream>
#include <vector>
#include <string>

bool IsLonger(std::vector<std::string> array, std::vector<std::string> array2){
    int firstMaxSize = 0;
    int secondMaxSize = 0;

    for(int i = 0; i < array.size(); i++){
        int currentSize = array[i].size();
        if(currentSize > firstMaxSize){
            firstMaxSize = currentSize;
        }
    }
    for(int i = 0; i < array2.size(); i++){
        int currentSize = array2[i].size();
        if(currentSize > secondMaxSize){
            secondMaxSize = currentSize;
        }
    }

    if(firstMaxSize < secondMaxSize){
        return false;
    }else{
        return true;
    }
}

int main() {

    std::vector<std::string> array = {"Ala", "Maja", "MonikaDziewczynaRatownika"};
    std::vector<std::string> array2 = {"A"};
    std::cout << IsLonger(array, array2);
    return 0;
}
