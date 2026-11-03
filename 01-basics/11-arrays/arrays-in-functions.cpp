#include <iostream>

void print_array(int array[], int size){ // whlie passing  a array it becomes a pointer.
    for (int i = 0; i < size; i++){
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

int main(){
    int guesses[] = {10,13,54,42,12,12,13};
    int size =  sizeof(guesses) / sizeof(int); // to get the size of the array named guesses but passed to array that is in a fuction it lost scence of what is its size  
    print_array(guesses, size);
    
    return 0;
}