#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  srand(time(NULL));rand();
  
  // Write a program to tell whether or not a solution is basic or acidic
  // based on a pH level.
  // Research https://www.epa.gov/goldkingmine/what-ph

  int pH = (14+1)*(double(rand())/double(RAND_MAX));
  string category;

  if(pH<7){
    category = "pH Level : " + to_string(pH) + ". This substance is Acidic.";
  }
  else if(pH>7){
    category = "pH Level : " + to_string(pH) + ". This substance is Basic.";
  }
  else if(pH == 7){
    category = "pH Level : " + to_string(pH) + ". This substance is Neutral.";
  }

  cout << category;

  return 0;
}