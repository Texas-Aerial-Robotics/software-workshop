#include <iostream>

int main() {

  // Write a program that sings the 100 bottles of [juice] song.
  int juices = 99;
  std::string grammar = " bottles ";
  std::string line1;
  std::string line2;

  for (int i = 0; i < juices; i++) {
        line1 = '\n' + std::to_string(juices-i) + grammar + "of juice on the wall, " + std::to_string(juices-i) + grammar + "of juice.";

        std::cout << line1 << std::endl;

        if(juices-i <= 2){
          grammar = " bottle ";
        }

        if(juices-i > 1){
        line2 = "Take one down and pass it around, " + std::to_string(juices-i-1) + grammar + "of juice on the wall.";
        std :: cout << line2 << std::endl;
        }
        else{
          std::cout<< "Take one down and pass it around, no more bottles of juice on the wall." <<std::endl;
        }
  }

  std::cout<< "\nNo more bottles of juice on the wall, no more bottles of juice." <<std::endl;
  line2 = "Go to the store and buy some more, " + std::to_string(juices) + " bottles of juice on the wall.\n";
  std::cout<<line2<<std::endl;

  return 0;    
} 