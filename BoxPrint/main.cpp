#include <iostream>
#include <vector>
#include <string>

void boxPrint(std::vector<std::string> sentences, char frameChar = '*'){
    int longesSentenceLength = 0;

    for(auto x : sentences){
        if(x.size() > longesSentenceLength){
            longesSentenceLength = x.size();
        }
    }

    for(auto i = 0; i < longesSentenceLength + 2; i++){
        std::cout << frameChar;
    }

    std::cout << '\n';

    for(auto x : sentences){
        std::cout << frameChar << x;
        for(auto i = 0; i < longesSentenceLength - x.size(); i++){
            std::cout << ' ';
        }
        std::cout << frameChar <<'\n';
    }

    for(auto i = 0; i < longesSentenceLength + 2; i++){
        std::cout << frameChar;
    }
    std::cout << '\n';
}


auto main() -> int {
    boxPrint({"a", "quick", "brown", "fox"});
    boxPrint({"a", "quick", "brown", "fox"}, '*');
    boxPrint({"a", "quick", "brown", "fox"}, '#');
    boxPrint(std::vector<std::string>{"a", "quick", "brown", "fox"}, '#');
    boxPrint({""});
    boxPrint({});
    boxPrint({}, '#');
    boxPrint({"", "hmmmm", ""});
    boxPrint({"", "", ""});

    return 0;
}
