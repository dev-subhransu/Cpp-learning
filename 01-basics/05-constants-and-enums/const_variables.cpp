#include <iostream>

int main() {
    const int x = 5;//(Recommended) x is a symbolic constant variable and its value cannot be changed
    //if we try to change the value of x, it will give a compile time error
    //x = 10; // Uncommenting this line will cause a compile-time error
    /*The use of const keyword is that we can use the variable throughtout the code.
    without the fear of changing its value.
    */
    std::cout << "The value of x is: " << x << std::endl;
    return 0;
}