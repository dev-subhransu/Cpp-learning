#include <iostream>
#include <string>

using std::cin;

int main() {
    std::string str;
    std::cout << "Enter a line of text: ";
    std::getline(cin, str); // Read a full line of text including spaces(for characters)
    std::cout << "You entered: " << str << "\n"; // Output the entered line
    std::string str1;
    //cin.getline(str1); // use this to get numbers
    return 0;
}