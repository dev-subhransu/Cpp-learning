#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main() {
    /* Escape sequences are special characters in C++ that are used to represent characters 
    that cannot be directly typed or displayed. */

    cout << "Hello\tthere" << endl; // \t is used to add a tab space between Hello and there
    cout << "Hello\bthere" << endl; // \b is used to add a backspace character between Hello and there
    cout << "Hello\nthere" << endl; // \n is used to add a new line between Hello and there
    cout << "Hello\"there" << endl; // \" is used to add a double quote character between Hello and there
    cout << "Hello\0'there" << endl; // \0 is used to add a null character between Hello and there
    cout << "Hello\vthere" << endl; // \v is used to add a vertical tab character between Hello and there
    cout << "Hello\\there" << endl; // \\ is used to add a backslash character between Hello and there
    return 0;
}