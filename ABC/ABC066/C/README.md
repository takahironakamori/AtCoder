### ABC066

# C - pushpush

  [問題はこちら](https://atcoder.jp/contests/abc066/tasks/arc077_a)


## 発想

  iが偶数のときは数列の後ろにつける。<br>
  iが奇数のときは数列の前につける。<br>
  nが偶数のときは数列の前から出力する。<br>
  nが奇数のときは数列の後ろから出力する。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    deque<int> b;

    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        b.push_back(a[i]);
      } else {
        b.push_front(a[i]);
      }
    }

    if (a.size() % 2 == 1) {
      while (!b.empty()) {
        cout << b.back() << " ";
        b.pop_back();
      }
    } else {
      while (!b.empty()) {
        cout << b.front() << " ";
        b.pop_front();
      }
    }
    cout << endl;

    return 0;

  }
  ```
