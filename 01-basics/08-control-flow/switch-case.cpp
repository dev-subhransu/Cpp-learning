#include <iostream>
int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    switch (age) {
        case 18:
            std::cout << "You are 18 years old." << std::endl;
            break; // if not used, it will continue to the next case and execute it as well
            // alternatively, you can use return 0; to exit the program after executing the case
        case 19:
            std::cout << "You are 19 years old." << std::endl;
            break;
        case 20:
            std::cout << "You are 20 years old." << std::endl;
            break;
        default:
            std::cout << "Your age is not in the range of 18 to 20." << std::endl;
            break;
    }
    return 0;
}