#include <iostream>
int main() {
    int answer = 11;
    std::cout << "Guess the number: ";
    int guess;
    std::cin >> guess ;
    int points = guess == answer ? 10 : 0; // it is a ternary operator
    //Sytax of ternary operator: Expression ? [value if expression is true] : [value if expression is false];
    if(guess == answer){
        points = 10;
    }
    std::cout << points << std::endl;
    return 0;
}