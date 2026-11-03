#include <iostream>
#include <array>
#include <array>

int main(){

    //It has a very specific function of iterating through collection.

    int data[] = {1, 2, 3, 4, 5, 6};

    /*
    Syntax for Range based for loop
    for(data_type_of_collection temp_variable_to_store_the_data_of_collection : name_of_collection){
        std::cout << name_of_temparary_variable << '\t';
    }
    */
    for(int temp : data){
        std::cout << temp <<'\t';
    }
    return 0;
}