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
void print_pow(double base, int exponent) // does not return any value, just prints the result.
{
    double mypower = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is " << mypower << std::endl;
}
    
int main(){
    double base;
    int exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    print_pow(base, exponent);
    return 0;
}