#include <bits/stdc++.h>
using namespace std;

int main()
{
  double a, b;
  cin >> a;
  cin >> b;
  double result = b / a;
  cout << double(100.0) - result * double(100.0);
  return 0;
}