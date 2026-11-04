#include <iostream>
int main() {
    int grades[3][3] = {{1,2,3},{3,6,5},{7,4,9}}; // created a 2d array

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            std::cout << grades[r][c] << '\t';
        }
        std::cout << '\n';
    }
    
    return 0;
}