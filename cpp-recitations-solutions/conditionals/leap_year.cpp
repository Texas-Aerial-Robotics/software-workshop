#include <iostream>
using namespace std;

int main() {
  int year;

  // Ask the user to input a year, then store the response in an integer.
  cout << "Enter a year : ";
  cin >> year;
  
  // Write out the logic for leap year, and tell the user whether or not their
  // input was on a leap year.
  int end = year%10; 
  string output;

  if(end==0 && year%400==0){
    output = to_string(year) + " is a leap year.";
  }
  else if(end!=0 && year%4==0){
    output = to_string(year) + " is a leap year.";
  }
  else{
    output = to_string(year) + " is NOT a leap year.";
  }

  // From Google: A year is a leap year if it is divisible by four, except for
  // end-of-century years. End-of-century years must be divisible by 400 to be
  // leap years. For example, 2000 is a leap year, but 1900 is not. 2024,
  // 2028, 2032, and 2036 are also leap years.
  cout<<output;

  return 0;
}
