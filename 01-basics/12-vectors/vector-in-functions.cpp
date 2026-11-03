#include <iostream>
#include <vector>

void print_vector(std::vector <int> data){
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << '\t';
    }
    
}

int main() {
    std::vector <int> data = {31,32,33,34,35,36};
    print_vector(data);
    return 0;
}