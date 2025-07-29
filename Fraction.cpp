#include "Fraction.h"
#include <iostream>
#include <sstream>

using namespace std;

Fraction::Fraction(int n, int d, bool simplifyFlag = true)
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
  this->doubleValue = static_cast<double>(n) / d;
  if (simplifyFlag)
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

Fraction Fraction::negate() const
{
  return Fraction(-numerator, denominator, false);
}

Fraction Fraction::enverse() const
{
  return Fraction(denominator, numerator, false);
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

Fraction Fraction::stdDenomirators(int firstD, int secondD)
{
  int lcmValue = lcm(firstD, secondD);
  return Fraction(lcmValue, lcmValue, true);
}

double Fraction::getDoubleValue() const
{
  return doubleValue;
}

Fraction Fraction::parse(string &formula)
{
  stringstream ss(formula);
  int n, d;
  char slash;
  if (!(ss >> n >> slash >> d) || slash != '/')
  {
    throw runtime_error("Invalid fraction format. Use format like 3/4.");
  }
  return Fraction(n, d);
}

string Fraction::to_string()
{
  return ::to_string(numerator) + "/" + ::to_string(denominator);
}

//* Operators
Fraction Fraction::operator+(const Fraction &other) const
{

  int n = numerator * other.denominator + denominator * other.numerator;
  int d = denominator * other.denominator;
  return Fraction(n, d, true);
}
Fraction Fraction::operator-(Fraction const &other) const
{

  return *this + other.negate();
}
Fraction Fraction::operator*(const Fraction &other) const
{
  return Fraction(numerator * other.numerator, denominator * other.denominator, true);
}
Fraction Fraction::operator/(const Fraction &other) const
{
  return *this * other.enverse();
}
bool Fraction::operator==(const Fraction &other) const
{
  return ((numerator == other.numerator) && (denominator == other.denominator));
}
bool Fraction::operator!=(const Fraction &other) const
{
  return !(*this == other);
}

bool Fraction::operator<(const Fraction &other) const
{
  //? Self before knowing that ad < bc is available;
  // Fraction stdD = stdDenomirators(denominator, other.denominator);
  // Fraction first = *this * stdD;
  // Fraction second = other * stdD;
  // if (first.numerator < second.numerator)
  // return true;
  // return false;
  return (numerator * other.denominator) < (denominator * other.numerator);
}

bool Fraction::operator>(const Fraction &other) const
{
  return other < *this;
}

bool Fraction::operator>=(const Fraction &other) const
{
  return (*this > other) || (*this == other);
}
bool Fraction::operator<=(const Fraction &other) const
{
  return (*this < other) || (*this == other);
}