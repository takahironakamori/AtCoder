### ABC072

# C - Together

  [問題はこちら](https://atcoder.jp/contests/abc072/tasks/arc082_a)


## 発想

  aについて、どの数字が何回使われているのかを数える。<br>
  Xを固定して、X、X+1、X+2が何回使われているのかを数える。<br>
  Xを0から100000くらいまで見た時の最大値が回答となる。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> count(100010);
    for (int i = 0; i < N; i++) {
      int a;
      cin >> a;
      count[a]++;
    }

    int answer = 0;

    for (int i = 0; i < count.size() - 2; i++) {
      answer = max(count[i] + count[i+1] + count[i+2], answer);
    }

    cout << answer << endl;

    return 0;

  }
  ```
