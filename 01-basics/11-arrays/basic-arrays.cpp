/*
Arrrays is statically typed.
Vector is dynamically typed.
+emplatized array is array which is wrap around by a object. 
*/

#include <iostream>

int main(){
    int guesses[] = {10,13,54,42,12,12,13};
    std::cout << guesses[3] << std::endl;
    guesses[3] = 300;
    std::cout << guesses[3] << std::endl;
    return 0;
}