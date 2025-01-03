#include <iostream>
#include <vector>
using namespace std;

vector<int> listprimes(int n){
  // function returns array of prime numbers between 1 and n
  vector<int> q = {2}; // 2 is the first and only even prime

  if (n < 2){
    cout << "Upper bound must be at least 2";
    return q={};
  }
  else if(n == 2){
    return q;
  }

  for (int i=3;i<=n;i++){
    for(int j=2;j<i;j++){
      if(i%j == 0){
        break;
      }
      else if(j == i-1){
        q.push_back(i);
      }
    }
  }

  return q;
}


int main() {
  
  // Write a program that outputs all the prime numbers from (1 to n]

  int n = 1000; 

  // Output the prime numbers under n along with the amount of primes to the user
  vector<int> q = listprimes(n);
  string output;
  if (n==2){
    output = "Only " + to_string(q.size()) + " prime between 1 and " + to_string(n) + " :\n " + to_string(q[0]);
    cout << output;
  }
  else{
    output = "There are " + to_string(q.size()) + " primes between 1 and " + to_string(n) + " :\n ";
    cout << output;
    for (int i = 0; i < q.size(); i++){
      if (i==0){
        cout<< "[";
      }
      cout << q[i];
      if (i < q.size()-1){
        cout<< ", ";
      }
      else if(i==q.size()-1){
        cout<<"]";
      }
    }
  }


  return 0;
}