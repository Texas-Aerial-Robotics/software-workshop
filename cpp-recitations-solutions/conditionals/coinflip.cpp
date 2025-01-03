#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  
  // Set the RNG seed.
  srand (time(NULL));
  rand(); // priming the RNG
  // https://cplusplus.com/reference/cstdlib/rand/

  // Use rand() to generate an integer with value either 0 or 1.
  int coinflip = rand() % 2;

  // // Experimenting with probability
  // int h,t = 0;
  // do{  
  //   coinflip = rand() % 2;
  //   if (coinflip == 0){
  //   t+=1;
  //   }
  //   else{
  //   h+=1;
  //   }} while(h+t<1000);

  // cout<<"Tails : " << t <<", "<< "Heads : " <<h<<endl;

  // With an if/else statement, return the heads/tails result to the user.
  if (coinflip == 0){
    cout<< "Tails" << endl;
  }
  else{
    cout << "Heads"<<endl;
  }
}