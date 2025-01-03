#include <iostream>
#include <fstream>

int main(){
    //Say Hello to the World
    std::string hello;

    hello = "Hello Beautiful from C++";

    std::cout << hello << std::endl;
    std::cout<< "Version : "<< __cplusplus << std::endl;


    // BONUS : Write to a text file

    std::ofstream file("hellocpp.txt");
    file << hello;
    file.close();

    return 0; // tells system main function terminated successfully
}
