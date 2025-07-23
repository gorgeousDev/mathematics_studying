
#include "Arithmetic.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

  Arithmetic ar;
  cout << "5 + 3 = " << ar.add(5, 3) << "\n";
  cout << "5 - 3 = " << ar.subtract(5, 3) << "\n";
  cout << "5 * 3 = " << ar.multiply(5, 3) << "\n";
  cout << "5 / 3 = " << ar.divide(5, 3) << "\n";
  cout << "5 / 0 = " << ar.divide(5, 0) << "\n";
  cout << "gcd(48, 18) = " << ar.gcd(48, 18) << "\n";
  cout << "gcd(18, 48) = " << ar.gcd(18, 48) << "\n";
  cout << "gcd(-48, 18) = " << ar.gcd(-48, 18) << "\n";
  cout << "gcd(48, -18) = " << ar.gcd(48, -18) << "\n";
  cout << "gcd(-48, -18) = " << ar.gcd(-48, -18) << "\n";
  cout << "gcd(7, 0) = " << ar.gcd(7, 0) << "\n";
  cout << "gcd(0, 9) = " << ar.gcd(0, 9) << "\n";
  cout << "gcd(0, 0) = " << ar.gcd(0, 0) << "\n";

  cout << "gcd(9, 9) = " << ar.gcd(9, 9) << "\n";
  cout << "gcd(17, 5) = " << ar.gcd(17, 5) << "\n";
  cout << "gcd(999, 1) = " << ar.gcd(999, 1) << "\n";
  cout << "gcd(1, 5) = " << ar.gcd(1, 5) << "\n";
  cout << "gcd(12345, 7890) = " << ar.gcd(123456, 7890) << "\n";
  cout << "lcm(5, 7) = " << ar.lcm(5, 7) << "\n";

  return 0;
}