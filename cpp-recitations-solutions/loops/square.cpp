#include <iostream>
#include <vector>
using namespace std;

vector<int> perfectsquares(int n){
  // function returns array of perfect squares between 1 and n (inclusive)
  // NOTE: n is a natural number greater than 1, duh
  vector<int> sq = {};
  int v;
  for(int i = 1; i < n; i++){
    v = i*i;
    if (v>n){
      break;
    }
    else if(v==n){
      sq.push_back(v);
      break;
    }
    sq.push_back(v);
  }

  return sq;
}

int main() {
  
  // Write a program that outputs all the perfect squares between 1 and 100
  int n = 100;

  vector<int> psqrs = perfectsquares(n);

  string output = "There are " + to_string(psqrs.size()) + " Perfect Squares between 1 and " + to_string(n) + " :\n ";

  cout << output;

  for (int i = 0; i < psqrs.size(); i++){
      if (i==0){
        cout<< "[";
      }
      cout << psqrs[i];
      if (i < psqrs.size()-1){
        cout<< ", ";
      }
      else if(i==psqrs.size()-1){
        cout<<"]";
      }
  }

}