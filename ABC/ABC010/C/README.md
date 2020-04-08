### ABC010

# C - 浮気調査

  [問題はこちら](https://atcoder.jp/contests/abc010/tasks/abc010_3)


## 発想

  T × V で移動した距離がわかる。<br>
  tx<sub>a</sub>,ty<sub>a</sub> -> 女の子の位置 -> tx<sub>b</sub>,ty<sub>b</sub>の距離が移動した距離以下であれば、YESとなる。<br>


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int txa, tya, txb, tyb, T, V, n;
    cin >> txa >> tya >> txb >> tyb >> T >> V >> n;

    vector<int> x(n);
    vector<int> y(n);

    for (int i = 0; i < n; i++) {
      cin >> x[i] >> y[i];
    }

    double distance = 0;
    string answer = "NO";

    for (int i = 0; i < n; i++) {
      distance = sqrt((txa - x[i]) * (txa - x[i]) + (tya - y[i]) * (tya - y[i]));
      distance += sqrt((x[i] - txb) * (x[i] - txb) + (y[i] - tyb) * (y[i] - tyb));
      if (distance <= T * V) {
        answer = "YES";
        break;
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
