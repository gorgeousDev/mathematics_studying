#ifndef FRACTION_H
#define FRACTION_H
#include <string>

class Fraction
{

private:
  int numerator;
  int denominator;
  double doubleValue;

public:
  Fraction() : numerator(0), denominator(1) {}
  Fraction(int n, int d, bool simplifyFlag);
  static Fraction parse(std::string &formula);
  ~Fraction();

  //! METHODS
  static int gcd(int a, int b);
  void print() const;
  static int lcm(int a, int b);
  std::string to_string();
  void simplify();
  Fraction negate() const;
  Fraction enverse() const;
  double getDoubleValue() const;

  static Fraction stdDenomirators(int firstD, int secondD);

  //! OPERATORS
  Fraction operator+(const Fraction &other) const;
  Fraction operator*(const Fraction &other) const;
  Fraction operator/(Fraction const &other) const;
  Fraction operator-(Fraction const &other) const;
  bool operator==(const Fraction &other) const;
  bool operator!=(const Fraction &other) const;
  bool operator<(const Fraction &other) const;
  bool operator>(const Fraction &other) const;
  bool operator>=(const Fraction &other) const;
  bool operator<=(const Fraction &other) const;
};

#endif