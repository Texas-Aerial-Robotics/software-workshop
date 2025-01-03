#include <iostream>
#include <vector>
using namespace std;

vector<int> fibonacci(int n){
  vector<int> f = {0, 1};

  for(int i = 0 ; i < n; i++){
    int f0 = f[i];
    int f1 = f[i+1];
    f.push_back(f0+f1);
  }

  return f;
}

int main() { 
  
  // Write a program to print out Fibonnacci numbers (up to the nth number in the sequence)
  // https://en.wikipedia.org/wiki/Fibonacci_sequence

  int k = 20;
  int n = k-2;

  vector<int> fn = fibonacci(n);

  cout << "Fibonacci Numbers up to the " << k <<"th element in the sequence : \n";
  for (int i = 0; i < fn.size(); i++){
    if (i==0){
      cout<< "[";
    }
    cout << fn[i];
    if (i < fn.size()-1){
      cout<< ", ";
    }
    else if(i==fn.size()-1){
      cout<<"]";
    }
  }

  // Also Output : What is the 10th Fibonnacci number?
  if(fn.size()>=10) cout<< "\nThe tenth Fibonacci number is " << fn[9];

  return 0;
}