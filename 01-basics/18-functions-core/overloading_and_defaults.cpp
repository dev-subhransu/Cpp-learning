#include <iostream>
 
//here are example of function overloading
// A default argument is a argument is passed directly while defining function.

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