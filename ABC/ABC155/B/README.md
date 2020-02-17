### ABC155

# B - Papers, Please

  [問題はこちら](https://atcoder.jp/contests/abc155/tasks/abc155_b)


- 発想<br>
  A<sub>1</sub> から A<sub>N</sub> の中で偶数を set 等で集めて、<br>
  集めた偶数すべてが 3 でも 5 でも割り切れない場合は DENIED とする。<br>
  set で偶数を抜き出す場合は、偶数が 0 個の場合も考慮する。 


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    set<int> even;
    for (int i = 0; i < N; i++) {
      int n_;
      cin >> n_;
      if (n_ % 2 == 0){
        even.insert(n_);
      }
    }

    string answer = "APPROVED";

    for(auto item:even) {
      if (item % 3 != 0 && item % 5 != 0) {
        answer = "DENIED";
        break;
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
