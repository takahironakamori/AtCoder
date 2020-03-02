### ABC157

# C - Guess The Number

  [問題はこちら](https://atcoder.jp/contests/abc157/tasks/abc157_c)


## 解法1(コード1)

  Nが1のときは、答えになる可能性があるのは0から9までであり、<br>
  Nが2のときは、答えになる可能性があるのは10から99までであり、<br>
  Nが3のときは、答えになる可能性があるのは100から999までである。<br>
  数が少ないので、Nに応じて、小さい数から順番に条件を満たすかを全部試す。

## 解法2(コード2)

  s<sub>i</sub> = s<sub>i+1</sub>で、c<sub>i</sub> ≠ c<sub>i+1</sub>だと答えは存在しない。<br>
  s<sub>i</sub> = s<sub>i+1</sub>で、c<sub>i</sub> = c<sub>i+1</sub>をすべて満たす場合は、<br>
  s<sub>i</sub>桁目の値はc<sub>i</sub>となり、その桁の答えのベースとなる。<br>
  1桁目の値が0の場合、Nが1の場合はOKだが、それ以外の場合は答えは存在しない。<br>
  s<sub>i</sub>で1桁目が指定されていない場合、Nが1の場合は値は0、それ以外の場合は値は1となる。<br>
  2桁目、3桁目が指定されていない場合は、0で考えていい。<br>
  以上をもとに答えを導き出す。

## コード1（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<pair<int,int>> sc(N);
  for (int i = 0; i < M; i++) {
    cin >> sc[i].first >> sc[i].second;
  }

  // N=1のときは、答えは0から9まで
  // N=2のときは、答えは10から99まで
  // N=3のときは、答えは100から999まで
  int start[3] = {0,10,100};
  int end[3] = {9,99,999};

  // Nに合わせて可能性がある答えを小さい数から順番に確認する。
  for (int i = start[N - 1]; i <= end[N - 1]; i++) {

    // 文字列にしておく
    string str = to_string(i);

    // 答えが存在するか(true)しないか(false)
    bool flg = true;

    // 1桁ごと確認する。
    // 見ている桁とs_iが同じだったら、
    // その桁の値とc_iが同じかチェックする。
    // 値とc_iが異なると答えは存在しない。
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < M; k++) {
        if (j + 1 == sc[k].first) {
          if (sc[k].second != str[j] - '0'){
            flg = false;
          }
        }
      }
    }

    // flaがtrueのままfor文が終わった最初のiが答え。
    if (flg) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;

}
```

## コード2（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<pair<int,int>> sc(N);
  for (int i = 0; i < M; i++) {
    cin >> sc[i].first >> sc[i].second;
  }

  // keyを桁,valueをその桁の値で管理するmap。
  // 見ていない桁は値を-1(初期値)とする。
  map<int,int> v;
  for (int i = 1; i <= N; i++) {
    v[i] = -1;
  }

  // 答えになる整数があるか(ture)、ないか(false)
  bool flg = true;

  // mapに桁と値を入れる。
  // 一度値を入れた桁については、同じ値じゃないとダメ。
  for (int i = 0; i < M; i++) {
    int i_ = sc[i].first;
    if (v[i_] == -1) {
      v[i_] = sc[i].second;
    } else if (v[i_] != sc[i].second){
      flg = false;
      break;
    }
  }

  // mapの1桁目の値が0の場合は、
  // Nが1以外の場合はダメ。
  if (v[1] == 0) {
    if (N != 1) {
      flg = false;
    }
  } else if (v[1] == -1) {
    // 1桁目の値が-1の場合は、
    // Nが1の場合は0、それ以外は1にする。
    if (N == 1) {
      v[1] = 0;
    } else {
      v[1] = 1;
    }
  }

  int answer = -1;

  if (flg) {
    // 答えを作る。
    answer = 0;
    for (int i = 1; i <= N; i++) {
      if (v[i] != -1) {
        answer += v[i] * pow(10, N - i);
      }
    }
  }

  cout << answer << endl;

  return 0;

}
```
