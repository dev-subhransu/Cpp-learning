#include <iostream>
using std::cout;

int main() {
    /* char data type is used to store a single character and numeric values. 
    It is a 1 byte(8 bits) data type.
    It is also categorized as an integral data type because it can store numeric values.
    It is the smallest data type in C++ and can store values from -128 to 127 or 0 to 255 
    depending on whether it is signed or unsigned.
    */
   //storing character values in char data type
    char a = 'A';
    cout << a << std::endl;

    //In C++ you'll likely also see static_cast<int>(a).
    cout << (int) a << std::endl; //casting char to int to get the ASCII value of the character

    //storing numeric values in char data type
    char b = 65; //ASCII value of 'A'
    cout << (int) b << std::endl;

    //storing grater than 127(numeric value) in char data type using unsigned char
    unsigned char c = 200; //unsigned char can store values from 0 to 255
    cout << (int) c << std::endl;

    return 0;
}