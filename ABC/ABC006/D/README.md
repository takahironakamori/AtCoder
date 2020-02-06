### ABC006

# D - トランプ挿入ソート

  [問題はこちら](https://atcoder.jp/contests/abc006/tasks/abc006_4)

- 発想

  以下の入力例 1 のカードの並びを横にしたもので考える。<br>

  与えられるカードの並び<br>
  1 3 5 2 4 6<br>

  これまで出てきたカードの中で、i 枚の部分列が作れるもののうち、<br>
  最もカードの値が小さいものを保持する。<br>

  増加列とカードの値の最終形<br>

  <table>
    <tr>
      <td>増加列</td>
      <td>0</td>
      <td>1</td>
      <td>2</td>
      <td>3</td>
      <td>4</td>
      <td>5</td>
    </tr>
    <tr>
      <td>カード</td>
      <td>INF</td>
      <td>1</td>
      <td>2</td>
      <td>4</td>
      <td>6</td>
      <td>INF</td>
    </tr>
  </table>

  カードの配列は、必ず昇順になっているので、カードを入れ替える場所は 1 ヶ所しかないので、<br>
  二分探索で場所を探すことができる。<br>

  N から最終的な配列の長さの差が回答となる。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int INF = 100000000;

    vector<int> c(N);
    for (int i = 0; i < N; i++) {
      cin >> c[i];
    }

    // 長さ i+1 の増加部分列の最後の要素の最小
    vector<int> card(N + 1, INF);

    for (int i = 0; i < N; i++) {
      // これまで出てきたカードの中で、i 枚の部分列が作れるもののうち、
      // 最もカードの値が小さいものを入れる
      *upper_bound(card.begin(), card.end(), c[i]) = c[i];
    }

    int len = 0;

    for (int i = 0; i < N; i++) {
      if (dp[i] != INF) {
        len++;
      }
    }

    cout << N - len << endl;

    return 0;

  }
  ```
