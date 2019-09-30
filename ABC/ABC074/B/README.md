### ABC074

# B - Collecting Balls (Easy Version)

  [問題はこちら](https://atcoder.jp/contests/abc074/tasks/abc074_b)

- 発想
  
  x_i の値が K / 2 以下の場合は、タイプ A を使った方が移動距離が短い。<br>
  x_i の値が K / 2 より大きい場合は、タイプ B を使った方が移動距離が短い。<br>
  往復なので × 2 を忘れない。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
      cin >> x[i];
    }

    int d = 0;

    for (int i = 0; i < N; i++) {
      if (K / 2 < x[i]) {
        d += K - x[i];
      } else {
        d += x[i];
      }
    }

    cout << d * 2 << endl;

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
      int[] x = new int[N];

      for (int i = 0; i < N; i++) {
        x[i] = sc.nextInt();
      }

      sc.close();

      int d = 0;

      for (int i = 0; i < N; i++) {
        if (K / 2 < x[i]) {
          d += K - x[i];
        } else {
          d += x[i];
        }
      }

      System.out.println(d * 2);

    }

  }
  ```
    