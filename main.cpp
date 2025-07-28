
#include <cassert>
#include <iostream>
#include "Fraction.h"
using namespace std;

int main(int argc, char const *argv[])
{
  try
  {
    Fraction f1(3, 4);
    f1.print();

    Fraction f2(14, 20);
    f2.print();

    // (f1 + f2).print();
    // (f1 - f2).print();
    // (f1 * f2).print();
    // (f1 / f2).print();
    cout << (f1 != f2) << endl;
  }
  catch (const invalid_argument &e)
  {
    cout << "Caught exception: " << e.what() << endl;
  }

  return 0;
}