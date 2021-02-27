// 解けてない

#include <bits/stdc++.h>

int main()
{
  double n;
  std::cin >> n;
  int not_result = 0;
  for (float i = n; i >= 2; i--)
  {
    float biggest = std::floor(std::sqrt(i));
    for (float l = biggest; l >= 2; l--)
    {
      float target = i;
      while (target > 1 && std::floor(target) == target)
      {
        target = target / l;
      }
      if (target == 1)
      {
        not_result++;
        break;
      }
    }
  }

  std::cout << n - not_result;
}