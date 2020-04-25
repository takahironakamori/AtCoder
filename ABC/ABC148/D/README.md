### ABC148

# D - Brick Break

  [問題はこちら](https://atcoder.jp/contests/abc148/tasks/abc148_d)


## 発想

  1から順番に値を見つけていく必要がある。<br>
  左から1が見つかるまで砕き、1が見つかったら2が見つかるまで砕き、2が見つかったら3が見つかるまで...<br>
  をNまで繰り返す。


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

    int answer = 0;

    int current = 1;
    for (int i = 0; i < N; i++) {
      if (a[i] == current){
        current++;
      }else{
        answer++;
      }
    }

    if (answer == N) {
      cout << -1 << endl;
    } else {
      cout << answer << endl;
    }

  }
  ```
