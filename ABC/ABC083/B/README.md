### ABC083

# B - Some Sums

  [問題はこちら](https://atcoder.jp/contests/abc083/tasks/abc083_b)

- 発想
  
  シミュレーション。<br>
  1 から N まで順番に 1 文字ずつ分解して、A　以上 B 以下か否かを確認する。　
  
  
- 実装のポイント

  数値を 1 桁ずつ取得する場合、<br>
  C++ の場合は割り算とあまりの計算を駆使する<br>
  Java の場合は文字列にしてから 1 文字ずつ抜き取る<br>
  方法がいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, A, B;
    cin >> N >> A >> B;

    int r = 0;

    for (int i = 1; i <= N; i++) {

      int v = i;
      int sum = 0;

      if (10000 <= v) {
        sum += v / 10000;
        v = v % 10000;
      }

      if (1000 <= v) {
        sum += v / 1000;
        v = v % 1000;
      }

      if (100 <= v) {
        sum += v / 100;
        v = v % 100;
      }

      if (10 <= v) {
        sum += v / 10;
        v = v % 10;
      }

      sum += v;

      if (A <= sum && sum <= B) {
        r += i;
      }

    }

    cout << r << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int A = sc.nextInt();
      int B = sc.nextInt();

      sc.close();

      int count = 0;

      for (int i = 1; i <= N; i++) {
        String s = String.valueOf(i);
        String[] S = s.split("");
        int k = 0;
        for (int j = 0; j < S.length; j++) {
          k += Integer.valueOf(S[j]);
        }
        if (A <= k && k <= B) {
          count += i;
        }
      }

      System.out.println(count);

    }

  }
  ```
    