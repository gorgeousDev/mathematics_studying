#include "Algebra.h"
using namespace std;

bool Algebra::solve2Equations(const vector<vector<double>> &vec, map<string, double> &resultOut)
{

  double a1 = vec[0][0];
  double b1 = vec[0][1];
  double c1 = vec[0][2];
  double a2 = vec[1][0];
  double b2 = vec[1][1];
  double c2 = vec[1][2];

  double D = (a1 * b2) - (a2 * b1);
  double DX = (c1 * b2) - (c2 * b1);
  double DY = (a1 * c2) - (a2 * c1);
  double X, Y;

  if (D != 0)
  {
    X = DX / D;
    Y = DY / D;
  }
  else
  {
    return false;
  }

  resultOut["X"] = X;
  resultOut["Y"] = Y;

  return true;
}