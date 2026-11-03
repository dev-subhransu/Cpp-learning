#include <iostream>
#include <vector>

int main() {
    std::vector <int> items = {31,32,33};
    std::cout << items[2] << std::endl;
    items.push_back(34);
    for (int i = 0; i < items.size(); i++)
    {
        std::cout << items[i] << '\t';
    }
    std::cout << std::endl;
    items.pop_back();
    for (int i = 0; i < items.size(); i++)
    {
        std::cout << items[i] << '\t';
    }
    return 0;
}