#include <iostream>
#include <vector>
// https://www.geeksforgeeks.org/vector-in-cpp-stl/

int main() {

  int total_even = 0;
  int product_odd = 1;

  // For the below vector of values, write a program that displays the total
  // sum of the even elements and the product of all the odd elements.
  std::vector<int> vector = {2, 4, 3, 6, 1};


  std::cout << "Sum of even numbers is " << total_even << "\n";
  std::cout << "Product of odd numbers is " << product_odd << "\n";

  return 0;

}
