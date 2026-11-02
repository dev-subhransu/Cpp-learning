#include <iostream>
int main() {
    int number = 5;
    int factorial = number;
    int i = factorial -1;
    while(i > 1){
        factorial *= i;
        i--;
    }
    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;
    return 0;
}