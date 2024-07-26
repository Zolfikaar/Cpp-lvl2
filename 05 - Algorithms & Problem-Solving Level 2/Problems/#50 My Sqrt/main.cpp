#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

float ReadNumber()
{
  float Number = 0;

  cout << "Please Enter a number\n";
  cin >> Number;

  return Number;
}

int mySqrt(float Number)
{
  return pow(Number, 0.5);
}

int main()
{

  float Number = ReadNumber();

  cout << "\nMy Ceil: " << mySqrt(Number) << endl;
  cout << "C++ Ceil: " << sqrt(Number);

  return 0;
}
