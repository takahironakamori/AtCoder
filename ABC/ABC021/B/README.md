### ABC021

# B - 嘘つきの高橋くん

  [問題はこちら](https://atcoder.jp/contests/abc021/tasks/abc021_b)

- 発想<br>
  以下のどれかを満たす場合は最短経路にはなり得ない。<br>
  同じ町を 2 度以上経由した（すなわち、P_1 から P_N に、同じ数値が2個以上ある）。<br>
  スタート地点の町を 1 度以上経由した（すなわち、P_1 から P_N に、aと同じ値が 2 個以上ある）。<br>
  ゴール地点の町を 1 度以上経由した（すなわち、P_1 から P_N に、bと同じ値が 2 個以上ある）。<br>
  
  
- 実装のポイント<br>
  0 から N-1 までを key にした配列を用意して、スタート地点、ゴール地点、P_1 から P_N の各値でどの数値が何回使われているのかを数える。<br>
  例えば、n[1] は 2 を使っている回数が入る。<br>
  n[0] から n[N - 1] のうち、どれかの値が 2 以上のものがあれば NO、そうでない場合は、YESを出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, a, b, K;
    cin >> N >> a >> b >> K;

    vector<int> n(N);

    n[a - 1]++;
    n[b - 1]++;

    for (int i = 0; i < K; i++) {
      int n_;
      cin >> n_;
      n[n_ - 1]++;
    }

    string result = "YES";

    for (int i = 0; i < N; i++) {
      if (1 < n[i]) {
        result = "NO";
        break;
      }
    }

    cout << result << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      int a = sc.nextInt();
      int b = sc.nextInt();
      int K = sc.nextInt();
      Integer[] P = new Integer[K];
      Integer[] check = new Integer[N + 1];

      for (int i = 0; i <= N; i++) {
        check[i] = 0;
      }

      check[a] = 1;
      check[b] = 1;

      String result = "YES";

      for (int i = 0; i < K; i++) {
        P[i] = sc.nextInt();
      }

      for (int i = 0; i < K; i++) {
        check[P[i]] = check[P[i]] + 1;
      }

      for (int i = 0; i <= N; i++) {
        if (1 < check[i]) {
          result = "NO";
          break;
        }
      }

      System.out.println(result);

    }
  }
  ```
    