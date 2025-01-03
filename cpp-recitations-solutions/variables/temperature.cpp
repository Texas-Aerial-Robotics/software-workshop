#include <iostream>
#include <cmath>

// declare function
double tempf2tempc(double tempf);

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user to enter a temperature in degrees Fahrenheit.
  std::cout << "What is the temperature outside? (Enter a temperature in degrees Farenheit)" << '\n';
  // Store the entered value into tempf.
  std::cin >> tempf;

  // Convert the temperature into degrees Celsius and store into tempc.
  tempc  = tempf2tempc(tempf);
  
  // Output the result to the user.
  std::cout << tempf << " degrees Farenheit is " << round(100*tempc)/100 << " degrees Celsius"<< '\n';
  
  return 0;
  
}


// define function
double tempf2tempc(double tempf){
  double tempc = (tempf-32)*5/9;

  return tempc;
}