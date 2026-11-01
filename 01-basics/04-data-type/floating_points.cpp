#include <iostream>
#include <float.h> //To know the Significant digits can be trusted for each floating point data type

using std::cout;
using std::endl;

int main() {
    /*
    there are three floating point data types in C++:
    float
    double
    long double.
    */
    float a = 10.0 / 3; // Significant digits can be trusted for float data type is 6

    /*std::fixed is a manipulator that can be used to print floating point values in fixed-point notation 
    instead of scientific notation*/
    cout << std::fixed <<a * 1000000 << endl; //printing the value of a multiplied by 1000000 to see the significant digits
    //significant digits can be trusted for double data type is 15
    double b = 77000; //can also be written as 7.7E4(Scientific Notation) which is equal to 7.7 * 10^4
    double s = 7.7E4; //Scientific Notation
    std::cout << s << endl;
    long double c; // Significant digits can be trusted for long double data type is 18.
    cout <<FLT_DIG << endl; //printing the significant digits can be trusted for float data type
    /*
    Precision chart of floating point data types:
    float < double < long double
    */
    return 0;
}