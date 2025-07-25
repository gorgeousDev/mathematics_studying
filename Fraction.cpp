#include "Fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction(int n, int d)
{
  if (d == 0)
  {
    throw invalid_argument("ZeroError: Cannot divide by zero.");
  }
  if (d < 0)
  {
    n = -n;
    d = -d;
  }
  this->numerator = n;
  this->denominator = d;
  simplify();
}

Fraction::~Fraction()
{
}
int Fraction::lcm(int a, int b)
{
  a = abs(a);
  b = abs(b);
  if (a == 0)
    return 0;
  int result = (a * b) / gcd(a, b);
  return result;
}

void Fraction::simplify()
{

  int gcdValue = gcd(numerator, denominator);
  numerator /= gcdValue;
  denominator /= gcdValue;
}

int Fraction::gcd(int a, int b)
{
  a = abs(a);
  b = abs(b);

  //? الحماية مش ضرورية لأن الـ constructor بيمنع d=0
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }

  return a;
}

void Fraction::print() const
{

  cout << numerator << '/' << denominator << endl;
}

Fraction Fraction::operator+(const Fraction &other) const
{

  int n = numerator * other.denominator + denominator * other.numerator;
  int d = denominator * other.denominator;
  return Fraction(n, d);
}

//TODO: finish operators..
Fraction Fraction::operator-(const Fraction &other) const
{
}
Fraction Fraction::operator*(const Fraction &other) const {}
Fraction Fraction::operator/(const Fraction &other) const {}
bool Fraction::operator==(const Fraction &other) const {}
