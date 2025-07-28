#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{

private:
  int numerator;
  int denominator;

public:
  Fraction(int n, int d, bool simplifyFlag);

  ~Fraction();

  //! METHODS
  static int gcd(int a, int b);
  void print() const;
  static int lcm(int a, int b);

  void simplify();
  Fraction negate() const;
  Fraction enverse() const;

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