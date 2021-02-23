#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<vector<int>> time_corner;

  for (int i = 0; i < n; i++)
  {
    int t, x, y;
    cin >> t;
    cin >> x;
    cin >> y;
    time_corner.push_back({t, x, y});
  }

  bool flag = true;

  for (int i = 0; i < n; i++)
  {
    // 一つ前の時間と座標
    // (time,x,y) default = 0sec, x= 0,y = 0
    vector<int> previous_corner = {0, 0, 0};
    if (i != 0)
    {
      previous_corner.at(0) = (time_corner[i - 1].at(0));
      previous_corner.at(1) = (time_corner[i - 1].at(1));
      previous_corner.at(2) = (time_corner[i - 1].at(2));
    }

    // 移動時間の計算
    int sec = time_corner[i].at(0) - previous_corner.at(0);

    // 移動幅= xの移動幅＋yの移動幅
    int move_diff = abs(time_corner[i].at(1) - previous_corner.at(1)) + abs(time_corner[i].at(2) - previous_corner.at(2));
    // 1秒だけの場合、x,yは必ず移動しなければならない
    if (sec == 1 && move_diff == 0)
    {
      flag = false;
      break;
    }

    // 座標の移動幅が移動時間より大きいと無理
    if (sec - move_diff < 0)
    {
      flag = false;
      break;
    }

    // ななめに移動できないので、偶数動詞or奇数動詞じゃないとむりい
    if (!((sec % 2 == 0 && move_diff % 2 == 0) || (sec % 2 == 1 && move_diff % 2 == 1)))
    {
      flag = false;
      break;
    }
  }

  cout << (flag ? "Yes" : "No");
  return 0;
}
