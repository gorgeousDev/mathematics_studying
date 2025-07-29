
#include <cassert>
#include <iostream>
#include "Fraction.h"
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
  vector<string> fractionInputs(4);
  vector<Fraction> fractionOutputs(4);
  for (int i = 0; i < fractionInputs.size(); i++)
  {
    cout << "Enter the fraction #" + to_string(i) + ": ";
    if (!(getline(cin, fractionInputs[i])) || fractionInputs[i].empty())
    {
      cout << "You Entered a not available value for a fraction, try again!" << endl;
      --i;
      cin.clear();
      continue;
    }
    try
    {
      fractionOutputs[i] = Fraction::parse(fractionInputs[i]);
    }
    catch (const exception &e)
    {
      cout << "Caught exception: " << e.what() << endl;
      --i;
    }
  }

  Fraction sum1 = fractionOutputs[0] + fractionOutputs[1];
  Fraction sum2 = fractionOutputs[1] + fractionOutputs[2];

  cout << fractionOutputs[0].to_string() + " + " + fractionOutputs[1].to_string() + " = " + sum1.to_string() << endl;
  cout << fractionOutputs[1].to_string() + " + " + fractionOutputs[2].to_string() + " = " + sum2.to_string() << endl;
  cout << "sum1 > sum2? " << (sum1 > sum2 ? "true" : "false") << endl;

  return 0;
}