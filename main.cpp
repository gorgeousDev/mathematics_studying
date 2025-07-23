
#include "Arithmetic.h"
#include <cassert>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  Arithmetic ar;
  auto [q, r] = ar.longDivision(17, 4);
  assert(q == 4);
  assert(r == 1);
  cout << "test passed" << endl;
  return 0;
}