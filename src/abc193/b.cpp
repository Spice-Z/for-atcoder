#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int result = -1;
  for (int i = 0; i < n; i++)
  {
    int a, p, x;
    cin >> a;
    cin >> p;
    cin >> x;
    if (x > a && (result == -1 || result > p))
    {
      result = p;
    }
  }
  cout << result;

  return 0;
}