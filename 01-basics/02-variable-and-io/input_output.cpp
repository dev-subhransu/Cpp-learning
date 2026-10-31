#include <iostream>
using std::cout;
int main() {
    // using variables with cout
    int slice = 5;
    cout << "You have " << slice << " slices of pizza." << std::endl;
    printf("%i\n",slice);
    // user Input with cin
    int people;
    cout << "How many people are there? ";
    std::cin >> people;
    cout << "There are " << people << " people to eat " << slice << " slices of pizza."<< std::endl;
    return 0;
}