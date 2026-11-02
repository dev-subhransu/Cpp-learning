#include <iostream>
#include <string>

int main() {
    std::string answer = "Jena";
    int age_answer = 19;

    std::string guess;
    int age_guess;

    std::cout << "Guess my surname: ";
    std::cin >> guess;
    std::cout << "Guess my age: ";
    std::cin >> age_guess;
    
    /*
    && is a logical operator that checks if both conditions are true.
    || is a logical operator that checks if at least one of the conditions is true.
    ! is a logical operator that negates the condition, making it true if the condition is false and vice versa.

    == is a comparison operator that checks if two values are equal.
    != is a comparison operator that checks if two values are not equal.
    < is a comparison operator that checks if the left value is less than the right value.
    > is a comparison operator that checks if the left value is greater than the right value.
    <= is a comparison operator that checks if the left value is less than or equal to the right value.
    >= is a comparison operator that checks if the left value is greater than or equal to the right value.
    */

    if (guess == answer && age_guess == age_answer){ 
        std::cout << "You got it right!" << std::endl;
    }
    return 0;
}