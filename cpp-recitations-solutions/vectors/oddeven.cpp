#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
// https://www.geeksforgeeks.org/vector-in-cpp-stl/

int sumeven(vector<int> v){
    int s = 0;
    for(int i = 0; i<v.size(); i++){
      if(v[i]%2==0){
        s = v[i]+s;
      }
    }
  return s;
}

int productodd(vector<int> v){
  int p = 1;
  for(int i = 0;i<v.size();i++){
    if(v[i]%2!=0){
      p = v[i]*p;
    }
  }
  return p;
}

int main() {
  srand(time(NULL)); rand();

  // For the below vector of values, write a program that displays the total
  // sum of the even elements and the product of all the odd elements
  int n = 7; // length of array
  vector<int> vector = {};

  while(vector.size()!=n){
    vector.push_back(rand()%10 + 1.0);
  }

  cout << "Vector given is ";
  for (int i = 0; i < vector.size(); i++){
      if (i==0){
        cout<< "[";
      }
      cout << vector[i];
      if (i < vector.size()-1){
        cout<< ", ";
      }
      else if(i==vector.size()-1){
        cout<<"]\n";
      }
    }


  cout << "Sum of even numbers is " << sumeven(vector) << "\n";
  cout << "Product of odd numbers is " << productodd(vector) << "\n";

  return 0;

}
