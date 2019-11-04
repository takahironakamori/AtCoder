### ABC046

# B - AtCoDeerくんとボール色塗り / Painting Balls with AtCoDeer

  [問題はこちら](https://atcoder.jp/contests/abc046/tasks/abc046_b)

- 発想<br>
  最初は K 色から選べて、2 回目以降は隣の色の 1 色を引いた K - 1 色から選ぶことができる。<br>
  K に (K - 1) の (N - 1) 乗をかけたものが回答となる。
  
- 実装のポイント<br>
  for 文で掛け算を繰り返してもいいし、pow()を使ってもいい。<br>
  どちらにせよ大きな数値になるので、型に注意する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    cout << K * (long) pow(K - 1, N - 1) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int K = sc.nextInt();

      sc.close();

      int count = K;

      for (int i = 1; i < N; i++) {
        count = count * (K - 1);
      }

      System.out.println(count);

    }

  }
  ```
    