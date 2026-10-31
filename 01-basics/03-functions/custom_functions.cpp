#include <iostream>
using std::cout;
using std::cin;

double power(double base, int exponent) //declaration and definition of a function
{
    double result =1.0;
    for(int i=0; i<exponent; i++){
        result = result*base;
    }
    return result;
}
int main(){
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    double mypower = power(base, exponent);
    cout << mypower << std::endl;
    return 0;
}