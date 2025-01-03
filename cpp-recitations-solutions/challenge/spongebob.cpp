#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void printVector(vector<char> vec){
    int N = vec.size();
    for (int i = 0; i < vec.size(); i++){
      if (i==0) cout<< "[";

      cout << vec[i];

      if( i < N - 1) cout << ", ";

      if(i == N -1) cout<<"]";
    }
}

// limited to one line of text.
void sPoNGEbOBtext(string input){
  vector<char> lowercase = {};
  vector<char> uppercase = {};
  int n;
  int N = input.size();

  // Using ASCII Values, https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
  n = 65;
  // Uppercase Alphabet
  for(int i = n; i < n+26; i++){
    uppercase.push_back(i);
  }
  n = 97;
  // Lowecase Alphabet
  for(int i = n; i < n+26; i++){
    lowercase.push_back(i);
  }

  for(int i = 0; i < N; i++){
    rand(); // psuedo random number generation
    for(int j = 0; j < uppercase.size(); j++){
      n = rand()%2; // get a 0 or 1 to randomize letter case
      if(n == 1 && input[i] == uppercase[j]){
        input[i] = lowercase[j];
      }
      else if(n == 1 && input[i] == lowercase[j]){
        input[i] = uppercase[j];
      }
    }
  }

  cout << "Spongebob Text : " << input;
}

int main() {
  srand(time(NULL));
  // Write a program to turn a character vector into SPongeBobE Text.
  // Info on strings in C/C++, https://www.geeksforgeeks.org/strings-in-cpp/
  string input;

  cout << "Enter a phrase or quote : ";
  getline(cin,input);

  cout << "Original String : " << input << endl;

  sPoNGEbOBtext(input);

  return 0;
}