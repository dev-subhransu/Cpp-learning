#include <iostream>

void swap(int &a, int &b){

    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << '\t' << "b: " << b << std::endl;

}
int main(){
      
    int a;
    int b;

    std::cin >> a;
    std::cin >> b;

    swap(a, b);
    std::cout << "a: " << a << '\t' << "b: " << b << std::endl;
    return 0;
}