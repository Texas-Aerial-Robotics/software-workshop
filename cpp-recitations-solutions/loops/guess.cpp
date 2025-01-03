#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  srand(time(NULL)); // allows random number generation to pull from a different sequence of numbers every run of the programs
  rand(); // priming up the RNG

  // Initialize a number that will serve as the "answer" to the guessing game.
  // (Try to make it random!)
  int k, n, answer; k = 10; n = k +1; answer = rand() % 100 * n/99;

  // Tell the user to guess a certain number and store their guess.
  string touser;
  touser = "Guess a number (integer i.e. no decimal) between 0 and " + to_string(k) + " : ";
  cout << touser;
  int guess;
  cin >> guess;
  if (guess>k || guess<0){
    touser = "Your guess is outside the range gang, read carefully.";
    cout << touser;
  }

  // Write a while loop here:
  while (guess!=answer) {
    // Tell the user the guess was wrong, and get another guess.
    touser = "Try again : ";
    cout << touser;
    cin >> guess;
    if (guess>k || guess<0){
    touser = "Fam, the range is from 0 to " + to_string(k) + "! ";
    cout << touser;
    } 
  }
  
  // Let the user know they finally won!
  touser = "You got it! The number was " + to_string(answer) + ".";
  cout << touser << endl;

  return 0;
  
}