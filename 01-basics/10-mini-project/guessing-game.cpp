#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


void play_game(){
    int random = rand() % 251;
    std::cout << random << std::endl;
    while(true){
        int guess;
        std::cout <<"\nGuess the number: ";
        std::cin >> guess;
        if (guess == random){
            std::cout << "You win!\n";
            break;
        }else if(guess < random){
            std::cout << "\nToo low\n";
        }else
        {
            std::cout << "\nToo high\n";
        }
        
        
    }
}
int main() {
    srand(time(NULL));
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
            play_game();
            break;
        default:
            std::cout << "Invalid choice";
            break;
        }
    }while (choice !=0);
    return 0;
}