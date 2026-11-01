#include <iostream>
#include <climits> // to knows how much memory is allocated for each data type (limits of integral types)
using std::cout;

int main(){
    // short <= int <= long <= long long
    short a; //16 bits
    int b; //32 bits
    long c; //32 or 64 bits
    long long d; //64 bits
    unsigned short e; //16 bits
    unsigned int f; //32 bits
    unsigned long g; //32 or 64 bits
    unsigned long long h; //64 bits

    // sizeof() operator returns the size of a data type in bytes
    cout << "Size of short: " << sizeof(a) << " bytes" << std::endl;
    cout << "Size of int: " << sizeof(b) << " bytes" << std::endl;
    cout << "Size of long: " << sizeof(c) << " bytes" << std::endl;
    cout << "Size of long long: " << sizeof(d) << " bytes" << std::endl;
    cout << SHRT_MIN << " <= short <= " << SHRT_MAX << std::endl;
    cout << ULLONG_MAX <<  std::endl;
    return 0;
}