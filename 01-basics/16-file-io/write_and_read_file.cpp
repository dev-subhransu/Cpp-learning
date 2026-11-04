// Wrting files with ofstream.

#include <iostream>
#include <fstream> // used to read and write from/to files.
#include <vector>

int main(){
    std::ofstream wfile; //making object of a class called ofstream to write in a file
    wfile.open("hello.txt"); //opening a file named hello.txt  can be also open while making the object 
    //like std::ofstream file ("hello.txt");
    //to append every time instead of overwrite use std::ofstream file ("hello.txt" , std::ios::app);
    std::vector <std::string> wnames;
    wnames.push_back("subhramsu");
    wnames.push_back("himanshu");
    wnames.push_back("rukmani");

    for (std::string t_name : wnames){
        wfile << t_name << std::endl;
    }

    wfile << "hey"; // to write in file
    wfile.close(); // to close a open file
    
    std::ifstream rfile ("hello.txt");// making a object of a class called ifstream to read from a file.
    std::vector <std::string> rnames;
    std::string input;
    while ( rfile >> input )
    {
        rnames.push_back(input);
    }
    for (std::string tr_name : rnames)
    {
        std::cout << tr_name << std::endl;
    }
    

    return 0;
}