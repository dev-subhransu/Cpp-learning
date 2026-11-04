#include <iostream>
#include <string>
#include "utils.h"

void swap(int &a, int &b){

    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << '\t' << "b: " << b << std::endl;

}

void swap(std::string f_name, std::string l_name){

    std::string temp = f_name;
    f_name = l_name;
    l_name = temp;

    std::cout << "a: " << f_name << '\t' << "b: " << l_name << std::endl;
}