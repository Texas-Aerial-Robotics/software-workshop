#include <iostream>
#include <vector>
#include <string>

// https://www.geeksforgeeks.org/vector-in-cpp-stl/

int main() {
  
  // Write a program that turns a string into "whale talk." Whale talk follows the rules below:
  //
  // 1. There are no consonants. Only vowels excluding the letter y.
  // 2. The u‘s and e‘s are extra long, so we must double them.
  //

  std::string major = "Aerospace Engineering";
  std::string input = "I am studying " + major;

  std::cout << "Original String : " << input << '\n';

  // Hint 1: make a vector of vowels to reference.
  std::vector<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};

  // Hint 2: use a double for loop and push_back() calls.
  std::string output = "";

  for(int i = 0; i < input.size(); i++){
    for(int j = 0; j < vowels.size(); j++){

      if(input[i] == vowels[j]){
        output.push_back(input[i]);

        // double the u's and e's
        if(input[i] == vowels[4] || input[i] == vowels[1]){
          output.push_back(input[i]);
        }
        
        // double the U's and E's
        if(input[i] == vowels.back() || input[i] == vowels[6]){
          output.push_back(input[i]);
        }
      }

    }
  }

  // Print out the whale talk!
  std::cout<< "Whale Talk String : " << output;
  return 0; 
}