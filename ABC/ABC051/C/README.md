### ABC051

# C - Back and Forth

  [問題はこちら](https://atcoder.jp/contests/abc051/tasks/abc051_c)


## 発想

  点sと点tについて、sの上とtの左、tの下とsの右を結ぶように移動する。<br>
  そして、sの下とtの右、tの上とsの左を結ぶように移動する。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    int dx = tx - sx;
    int dy = ty - sy;

    for (int i = 0; i < dy; i++) {
      cout << "U";
    }

    for (int i = 0; i < dx; i++) {
      cout << "R";
    }

    for (int i = 0; i < dy; i++) {
      cout << "D";
    }

    for (int i = 0; i < dx; i++) {
      cout << "L";
    }

    cout << "L";

    for (int i = 0; i < dy + 1; i++) {
      cout << "U";
    }

    for (int i = 0; i < dx + 1; i++) {
      cout << "R";
    }

    cout << "D";

    cout << "R";

    for (int i = 0; i < dy + 1; i++) {
      cout << "D";
    }

    for (int i = 0; i < dx + 1; i++) {
      cout << "L";
    }

    cout << "U" << endl;


    return 0;

  }
  ```
