#include "Arithmetic.h"
#include <cmath>
#include <iostream>
using namespace std;

int Arithmetic::add(int a, int b)
{
  return a + b;
}

int Arithmetic::subtract(int a, int b)
{
  return a - b;
}

int Arithmetic::multiply(int a, int b)
{
  return a * b;
}

double Arithmetic::divide(int a, int b)
{

  if (b != 0)
  {
    return static_cast<double>(a) / b;
  }

  return -1;
}

int Arithmetic::gcd(int a, int b)
{
  a = abs(a);
  b = abs(b);
  if (a == 0 && b == 0)
  {
    cout << "Error: gcd of 2 zeros is undefined";
    return -1;
  }

  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }

  return a;
}

int Arithmetic::lcm(int a, int b)
{
  a = abs(a);
  b = abs(b);
  if (a == 0 || b == 0)
    return 0;
  int result = (a * b) / gcd(a, b);
  return result;
}

