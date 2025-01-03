#include <iostream>
#include <cmath>
#include <complex>

int main() {

  double a, b, c;
  double root1, root2;

  std::cout << "Finding the roots of a quadratic polynomial ax^2 + bx + c" << std::endl;

  // Ask the user to input coefficients a, b, c.
  std::cout << "Enter numerical input for a, b, and c (a<ENTER>b<ENTER>c<ENTER>): "<<'\n';
  std::cin >> a >> b >> c;

  double d = pow(b,2) - 4*a*c;

  // Find the two roots using the quadratic formula.
  if (d < 0){
  std::cout << "Determinant is negative, imaginary output" << '\n';
  std::complex <double> root (-0.5*b/a, 0.5*sqrt(-1*d)/a);
  // Output the result to the user.
  std::cout << "Roots of the quadratic " << a << "x^2 + "<< b << "x + " 
  << c << ": " << '\n' << root.real() << " +/- " << root.imag() << "j" <<'\n'; 
  }
  else if (d>0){
  std::cout << "Determinant is positive, two real outputs" << '\n';
  root1 =0.5*(-b + sqrt(d))/a;
  root2 =0.5*(-b-sqrt(d))/a;
  // Output the result to the user.
  std::cout << "Roots of the quadratic " << a << "x^2 + "<< b << "x + " << c << ": " << '\n' << root1 << ", "  << root2;
  }
  else {
  std::cout << "Determinant is zero, single real output" << '\n';
  root1 = 0.5*(-b)/a;
  // Output the result to the user.
  std::cout << "Root of the quadratic " << a << "x^2 + "<< b << "x + " << c << ": " << '\n' << root1 << '\n';        
  }

  return 0;
  
}
