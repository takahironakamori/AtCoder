### ABC153

# D - Caracal vs Monster

  [問題はこちら](https://atcoder.jp/contests/abc153/tasks/abc153_d)


- 発想<br>

  2 で割ることができる回数を数える。<br>
  1 からその回数まで、答えに 2 の n 乗を加えていく。<br>
  最後に 1 加える。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long H;
    cin >> H;

    long long answer = 0;

    long long count = 0;
    while (1 < H) {
      H = H / 2;
      count++;
    }

    while (0 < count) {
      answer += pow(2, count);
      count--;
    }

    cout << answer + 1 << endl;

  }
  ```
