### ABC154

# C - Distinct or Not

  [問題はこちら](https://atcoder.jp/contests/abc154/tasks/abc154_c)


- 発想<br>
  A<sub>1</sub> から A<sub>N</sub> までを set に入れ、
  N と set の size が同じなら A<sub>1</sub> から A<sub>N</sub> までにダブりはないと言える。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {

    int N;
    cin >> N;

    set<int> st;
    for (int i = 0; i < N; i++) {
      int a_;
      cin >> a_;
      st.insert(a_);
    }

    if (st.size() == N) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

    return 0;

  }
  ```
