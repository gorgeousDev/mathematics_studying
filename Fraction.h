#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{

private:
  int numerator;
  int denominator;

public:
  Fraction(int n, int d);

  ~Fraction();

  //!METHODS
  int gcd(int a, int b);
  void print() const;
int lcm(int a, int b);


  void simplify();


  //! OPERATORS
  Fraction operator+(const Fraction &other) const;
  Fraction operator*(const Fraction &other) const;
  Fraction operator/(const Fraction &other) const;
  Fraction operator-(const Fraction &other) const;
  bool operator==(const Fraction &other) const;

};

#endif