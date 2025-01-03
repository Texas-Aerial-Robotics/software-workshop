#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;


vector<int> sortascend(vector<int> list){
  vector<int> a = {};
  int N = list.size();

  int iter = 0;

  do{
    int minima = list[0]; // assuming minimum element of the given array is the first element
    int minindex = 0;
    for(int i = 0; i < list.size(); i++){
        if (list[i]<minima) {
          minima = list[i];
          minindex = i;
        };
    }

    list.erase(list.begin()+minindex);
    a.push_back(minima);
    iter++;
  }while(iter < N);

  return a;
}

void printVector(vector<int> vec){
    int N = vec.size();
    for (int i = 0; i < vec.size(); i++){
      if (i==0) cout<< "[";

      cout << vec[i];

      if( i < N - 1) cout << ", ";

      if(i == N -1) cout<<"]";
    }
}


int main() {  
  srand(time(NULL)); rand();
  // Write a program to sort a long list of random integers.
    // Ascending and Descnding Orders
  // https://cplusplus.com/reference/cstdlib/rand/
  // https://www.geeksforgeeks.org/vector-in-cpp-stl/

  // Original List
  int n = 20; 
  vector<int> r;

  while (r.size()<n)
  {
    r.push_back( 2*((rand()%100*100/99)-50) );
  }
  
  cout << "Long list of random integers : ";
  printVector(r);
  
  cout<<'\n';
  // Ascending Order
  vector<int> ascend = sortascend(r);
  int N = ascend.size();
  cout << "Sorted in Ascending Order : ";

  printVector(ascend);


  cout<<'\n';
  // Descending Order
  vector<int> descend = {};
  for(int i = 1; i <= N; i++){
    descend.push_back(ascend[N-i]);
  }

  cout << "Sorted in Descending Order : ";

  printVector(descend);

  // There are many other sorting orders such as https://www.geeksforgeeks.org/sort-array-according-order-defined-another-array/
  // Sorting Algorithms are quite important in programming, https://www.thedshandbook.com/sorting-in-arrays/
  return 0;
}