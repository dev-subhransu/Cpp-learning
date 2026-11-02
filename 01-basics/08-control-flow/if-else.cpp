#include <iostream>
int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if(age < 13){
        std::cout << "You are not old enough\n";
    }
    else if(age < 19){
        std::cout << "you are almost 10\n";
    }
    else{
        std::cout << "False\n";
    }
    return 0;
}