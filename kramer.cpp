
#include "Algebra.h"
#include <cassert>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{

  const int MAX_ROWS = 2;
  const int MAX_COLS = 3;
  vector<vector<double>> data(MAX_ROWS, vector<double>(MAX_COLS));

  cout << "==============================================================" << endl;
  cout << "                         Kramer Method                        " << endl;
  cout << "==============================================================" << endl;

  cout << endl;

  cout << "Please enter 2 equations. Each equation should be 3 numbers: `X-coeff Y-coeff Constant`.Example: 2 3 8" << endl;

  //! Easier Input Method
  for (int i = 0; i < MAX_ROWS; i++)
  {
    for (int j = 0; j < MAX_COLS; j++)
    {
      if (!(cin >> data[i][j]))
      {
        cout << "You entered unvalid data for equations to solve" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return 1;
      }
    }
  }

  Algebra al;
  map<string, double> result;

  if (al.solve2Equations(data, result))
  {
    for (auto &[key, value] : result)
    {
      cout << key << ": " << value << endl;
    }
  }
  else
  {
    cout << "No unique solution exists." << endl;
  }

  return 0;
}