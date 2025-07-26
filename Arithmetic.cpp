#include "Arithmetic.h"
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int Arithmetic::add(int a, int b)
{
  return a + b;
}

int Arithmetic::subtract(int a, int b)
{
  return a - b;
}

int Arithmetic::multiply(int a, int b)
{
  return a * b;
}

double Arithmetic::divide(int a, int b)
{

  if (b != 0)
  {
    return static_cast<double>(a) / b;
  }

  return -1;
}

int Arithmetic::gcd(int a, int b)
{
  a = abs(a);
  b = abs(b);
  if (a == 0 && b == 0)
  {
    cout << "Error: gcd of 2 zeros is undefined";
    return -1;
  }

  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }

  return a;
}

int Arithmetic::lcm(int a, int b)
{
  a = abs(a);
  b = abs(b);
  if (a == 0 || b == 0)
    return 0;
  int result = (a * b) / gcd(a, b);
  return result;
}

//! #######################################
void printPrimes(map<int, int> primes)
{

  for (auto &[key, value] : primes)
  {
    cout << key << "^" << value << " , ";
  }
  cout << endl;
}

vector<int> generatePrimes(int n)
{
  vector<bool> isPrime(n + 1, true);
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= n; ++i)
  {
    if (isPrime[i])
    {
      for (int j = i * i; j <= n; j += i)
        isPrime[j] = false;
    }
  }

  vector<int> primes;
  for (int i = 2; i <= n; ++i)
  {
    if (isPrime[i])
      primes.push_back(i);
  }
  return primes;
}

void Arithmetic::primeFactors(int n)
{
  vector<int> primes = generatePrimes(sqrt(n) + 1);
  map<int, int> result;
  for (int i = 0; i < primes.size(); i++)
  {
    int ele = primes[i];
    while (n % ele == 0)
    {
      result[ele]++;
      n /= ele;
    }
  }
  if (n > 1)
    result[n]++;
  printPrimes(result);
}
//! #######################################

pair<int, int> Arithmetic::longDivision(int divided, int divisor)
{
  int divResult = divided / divisor;
  int remainder = divided % divisor;

  // cout << divided << "/" << divisor << ": " << divResult << ", remainder: " << remainder << endl;
  return {divResult, remainder};
}


