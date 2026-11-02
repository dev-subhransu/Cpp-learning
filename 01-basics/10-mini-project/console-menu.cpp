#include <iostream>
int main() {
    int choice;
    do{
        std::cout << "0.Quit\n" << "1.Play Game" << std::endl;
        
        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "You are good for nothing\n";
            break;
        case 1:
            std::cout << "Yo! let's play\n";
            break;
        default:
            std::cout << "Invalid choice";
            break;
        }
    }while (choice !=0);
    return 0;
}