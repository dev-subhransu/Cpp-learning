#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

void print_vector(std::vector <int> guesses){
    for (int i = 0; i < guesses.size(); i++)
    {
        std::cout << guesses[i] << '\t';
    }
    std::cout << std::endl;
}


void play_game(){
    int random = rand() % 251;
    std::cout << random << std::endl;
    std::vector <int> guesses;
    while(true){
        int guess;
        std::cout <<"\nGuess the number: ";
        std::cin >> guess;
        guesses.push_back(guess);
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
    print_vector(guesses);
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