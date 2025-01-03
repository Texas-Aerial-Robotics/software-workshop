#include <iostream>
using namespace std;

void romannumeral(int n){
  // Limited to n = 3999 due to symbolic changes past this number
  string output = " ";

  if(n>3999 || n<1) cout<< n << " is out of range, upper bound is 3999, lower bound is 1"; 
  else{
  // Roman Numerals
  int M,C,X,I,rM,rC,rX,rI;
  M = 1000;
  C = 100;
  X = 10;
  I = 1;

  rM = (n - n%M)/M;
  rC = (n%M-n%C)/C;
  rX = (n%C-n%X)/X;
  rI = (n%X-n%I)/I;

  // 1000s
  for(int i = 0; i < rM; i++) output = output + "M";
  // 100s
  if(rC==9) {output = output + "CM";}
  else if(rC < 9 && rC>=5) {output = output+"D"; if(rC-5>0){for(int i = 0; i < rC-5; i++){output = output + "C";}}}
  else if(rC == 4) {output = output + "CD";}
  else {for(int i = 0; i < rC; i++){output = output + "C";}}
  // 10s
  if(rX==9) {output = output + "XC";}
  else if(rX < 9 && rX>=5) {output = output+"L"; if(rX-5>0){for(int i = 0; i < rX-5; i++){output = output + "X";}}}
  else if(rX == 4) {output = output + "XL";}
  else {for(int i = 0; i < rX; i++){output = output + "X";}}
  // 1s
  if(rI==9) {output = output + "IX";}
  else if(rI < 9 && rI>=5) {output = output+"V"; if(rI-5>0){for(int i = 0; i < rI-5; i++){output = output + "I";}}}
  else if(rI == 4) {output = output + "IV";}
  else {for(int i = 0; i < rI; i++){output = output + "I";}}

  cout << n << " in Roman Numerals is "<< output;
  }
}

int main() {
  
  // Write a program to turn an integer into its corresponding Roman numeral
  // representation.
  // https://en.wikipedia.org/wiki/Roman_numerals

  int year;
  cout<<"Input a year : ";
  cin >> year;
  romannumeral(year);  
}