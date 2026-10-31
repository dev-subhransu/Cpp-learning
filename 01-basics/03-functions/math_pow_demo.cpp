#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
int main(){
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    double power = pow(base, exponent);
    cout << power << std::endl;
    return 0;
}