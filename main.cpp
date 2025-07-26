
#include <cassert>
#include <iostream>
#include "Fraction.h"
using namespace std;

int main(int argc, char const *argv[])
{
  try
  {
    Fraction f1(4, -8);
    f1.print();

    Fraction f2(15, 20);
    f2.print();

    Fraction f3 = f1 + f2;
    f3.print();
  }
  catch (const invalid_argument &e)
  {
    cout << "Caught exception: " << e.what() << endl;
  }

  return 0;
}