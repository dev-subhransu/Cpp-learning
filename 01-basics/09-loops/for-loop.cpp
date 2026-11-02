#include <iostream>
int main() {
    int number = 5;
    int factorial = number;
    for (int i = factorial - 1; i > 0; i--){
        factorial *= i;
    }
    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;
    return 0;
}