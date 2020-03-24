### ABC091

# C - 2D Plane 2N Points

  [問題はこちら](https://atcoder.jp/contests/abc091/tasks/arc092_a)


## 発想

  青い点のx座標が小さいものから順番に、a < c と b < d を満たす赤い点のうち、bが最も大きいものを青い点とペアにする。<br>
    

## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    map<pair<int,int>, int> red;
    for (int i = 0; i < N; i++) {
      int a, b;
      cin >> a >> b;
      red[make_pair(a,b)] = 0;
    }

    set<pair<int,int>> blue;
    for (int i = 0; i < N; i++) {
      int c, d;
      cin >> c >> d;
      blue.insert(make_pair(c,d));
    }

    int answer = 0;

    for (auto b:blue) {
      int x = b.first;
      int y = b.second;
      vector<pair<int,int>> c;
      for (auto r:red) {
        if (r.second == 0) {
          if (r.first.first < x && r.first.second < y) {
            c.push_back(make_pair(r.first.second, r.first.first));
          }
        }
      }
      if (0 < c.size()) {   
        sort(c.begin(), c.end(), greater<pair<int,int>>());
        red[make_pair(c[0].second,c[0].first)] = 1;
        answer++;
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
