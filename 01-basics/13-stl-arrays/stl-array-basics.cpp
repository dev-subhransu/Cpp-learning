/*
stl array are statically typed.
they remember their size when passing into a function.
std::array <data_type, size> array_name; 
*/

#include <iostream>
#include <array>

int main(){
    std::array <int,6> items = {31,32,33};
    std::cout << items[2] << std::endl;
    for (int i = 0; i < items.size(); i++){
        std::cout << items[i] << '\t';
    }
}