#include <iostream>
#include <string>
#include "utils.h"

int main(){
      
    int a;
    int b;

    std::cin >> a;
    std::cin >> b;

    swap(a, b);
    std::cout << "a: " << a << '\t' << "b: " << b << std::endl;

    std::string f_name = "Subhransu";
    std::string  l_name = "Jena";
    std::cout << "a: " << f_name << '\t' << "b: " << l_name << std::endl;

    swap(f_name, l_name);
    return 0;
}