#include <iostream>
int main() {
    auto x = 5U; // unsigned int literal
    auto y = 5L; // long int literal
    auto z = 5LL; // long long int literal

    //Hex & Octal literals
    int hex =0x30; // hexadecimal literal
    int oct = 030; // octal literal
    int num = 30; // decimal literal
    std::cout <<std::hex << num << std::endl; // Output the hexadecimal value
    std::cout << std::oct << num << std::endl; // Output the octal value
    return 0;
}