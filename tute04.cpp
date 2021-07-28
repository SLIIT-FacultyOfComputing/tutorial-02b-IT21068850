/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

int Factorial(int no);
float nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
int Factorial(int no)
{
  int fac;
    if (no==0)
    {
        fac=1;
    }
    else
    {
     for (int r=no; r >= 1; r--) {
        fac = fac * r;
     }
    }
  return fac;

}
float nCr(int n, int r)
{ 
  int N,R,nr;

  N=Factorial(n);
  R=Factorial(r);
  nr=Factorial(n-r);

  return N/(R*nr);


  
   
}