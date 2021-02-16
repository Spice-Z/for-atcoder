#include <bits/stdc++.h>
using namespace std;

string check(string &target)
{
  int origin_target_size = target.size();
  vector<string> candidates(6);
  candidates = {"dreameraser", "dreamerase", "dreamer", "eraser", "dream", "erase"};
  int candidates_size = candidates.size();
  for (int i = 0; i < candidates_size; i++)
  {
    if (target.compare(0, candidates[i].size(), candidates[i]) == 0)
    {
      target.erase(0, candidates[i].size());
      break;
    }
  }
  int current_target_size = target.size();
  if (origin_target_size != current_target_size)
  {
    return check(target);
  }
  return target;
}

int main()
{
  string target;
  cin >> target;
  string result = check(target);
  if (result.size() == 0)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}