#include <iostream>

auto maxNestedParenthesesDepth(std::string str) -> int{

    int currentMax = 0;
    int max = 0;
    for(int i = 0; i < str.length(); i++){
        char element = str[i];
        if(element == '('){
            ++currentMax;
            if(currentMax > max){
                max = currentMax;
            }
        }
        if(element == ')'){
            --currentMax;
        }
    }
    return max;
}

int main() {
    std::cout << maxNestedParenthesesDepth("()") << ' '
              << maxNestedParenthesesDepth("(()(()))") << ' '
              << maxNestedParenthesesDepth("(sd()ds((ss))  a)") << ' '
              << maxNestedParenthesesDepth("(((S)))") << ' '
              << maxNestedParenthesesDepth("()()()()") << ' '
              << maxNestedParenthesesDepth("()(())()");
    return 0;
}
