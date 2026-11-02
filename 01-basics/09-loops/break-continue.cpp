#include <iostream>
#include <string>

int main() {
    std::string sentence = "I am Atomic!";
    for(int i = 0; i <=sentence.size(); i++){
        if (sentence[i] == 'o'){
            break; // break the loop entirely
        }
        std::cout << sentence[i] << std::endl;
    }
    for(int i = 0; i <=sentence.size(); i++){
        if (sentence[i] == 'o'){
            continue;// stop the current itteration and continue with next itteration
        }
        std::cout << sentence[i] << std::endl;
    }
    return 0;
}