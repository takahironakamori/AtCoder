### ABC019

# C - 高橋くんと魔法の箱

  [問題はこちら](https://atcoder.jp/contests/abc019/tasks/abc019_3)


## 発想

  ある数xに対する結果と2xに対する結果が同じなので、a<sub>i</sub>が2で割り切れなくなるまで2で割り続けてもいい。<br>
  これによりa<sub>i</sub>はすべて奇数になる。<br>
  あとは、Setなどを利用して、異なるa<sub>i</sub>の数を数えればいい。<br>


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
      cin >> a[i];
    }

    set<int> st;

    for (int i = 0; i < N; i++) {
      while (a[i] % 2 == 0){
        a[i] /= 2;
      }
      st.insert(a[i]);
    }

    cout << st.size() << endl;

    return 0;

  }
  ```
