### ABC151

# C - Welcome to AtCoder

  [問題はこちら](https://atcoder.jp/contests/abc151/tasks/abc151_c)


- 発想<br>
  N を要素数とする AC を数える配列と、<br>
  N を要素数とする WA を数える配列を用意する。<br>
  M 回分の結果を S_i が AC なら AC\[p_i] を 1 にする。<br>
  S_i が WA なら WA\[p_i] に 1 加える。<br>
  しかし、S_i が WA のとき、AC\[p_i] が 0 のときしか加えない。<br>
  M 回分の集計が終わったら、AC の配列の値 と WA の配列の値 を足し合わせる。<br>
  しかし、WA の数は AC\[p_i] が 1 の場合だけ加える。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    vector<int> AC(N);
    vector<int> WA(N);

    for(int i = 0; i < M; i++) {
      int p;
      cin >> p;
      string s;
      cin >> s;
      if (s == "AC" && AC[p - 1] == 0) {
        AC[p - 1] = 1;
      } else if (AC[p - 1] == 0) {
        WA[p - 1]++;
      }
    }

    int ac = 0;
    int wa = 0;

    for(int i = 0; i < N; i++) {
      ac += AC[i];
      if (AC[i] == 1) {
        wa += WA[i];
      }
    }

    cout << ac << " " << wa << endl;

  }
  ```
    