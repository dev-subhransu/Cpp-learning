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

    /* bool data type is used to store boolean values.
    It is a 1 byte(8 bits) data type.
    It can only store the values true or false.
    */
    bool pizza_is_good = true;
    cout << pizza_is_good << std::endl;

    bool is_milk_fresh = false;
    cout << is_milk_fresh << std::endl;

    //in bool data type 0 is considered as false and any non-zero value is considered as true
    bool is_sun_rising = 1; //1 is considered as true   
    bool is_sun_setting = 0; //0 is considered as false
    cout << is_sun_rising << std::endl;
    cout << is_sun_setting << std::endl;

    //example of using bool data type with non zero value
    bool is_raining = 5; //5 is considered as true
    cout << is_raining << std::endl;

    // usind std::boolalpha to print true or false instead of 1 or 0
    // boolalpha is a manipulator that can be used to print boolean values as true or false instead of 1 or 0
    cout << std::boolalpha << is_milk_fresh<< std::endl; //enables boolalpha
    return 0;
}