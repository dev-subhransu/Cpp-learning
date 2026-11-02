#include <iostream>
#include <string>

using std::cout;
using std::string;

int main() {
    
    string str1 = "Hello";
    string str2 = "World";
    string complete_str = str1 + " " + str2;// Concatenate strings with a space in between
    complete_str += "!";// Append an exclamation mark to the complete string
    cout << complete_str << "\n"; // Output the complete string
    cout << complete_str.length() << std::endl; // Output the length of the complete string

    //method == memeber function == functions attacched to the objects

    // c style string functions
    char cstr[] = "C-style string";//c string == "array of characters"
    //limitation of c style string is that it's size is fixed and cannot be changed  here it is fixxed 
    //to "C-style string\0" with the null character at the end

    string Istr;
    std::cin >>  Istr;// it has a limitation that it will only read the first word and not the complete line if there are spaces in between
    cout << Istr << "\n";
    return 0;
}