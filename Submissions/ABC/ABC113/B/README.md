### ABC113

# B - Palace

  [問題はこちら](https://atcoder.jp/contests/abc113/tasks/abc113_b)

- 発想<br>
  シミュレーション。<br>
  順番に各地点の平均気温を計算し、それらの中から A 度に最も近い点を求める。

  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, T, A;
    cin >> N >> T >> A;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
      cin >> H[i];
    }

    double answer = 0;
    double minDiff = 5000000;

    for (int i = 0; i < N; i++) {
      
      double a = T - H[i] * 0.006;
      double diff = abs(A - a);
      
      if (diff < minDiff) {
        answer = i;
        minDiff = diff;
      }
      
    }

    cout << answer+1 << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int T = sc.nextInt();
      int A = sc.nextInt();

      int[] H = new int[N];

      for (int i = 0; i < N; i++) {
        H[i] = sc.nextInt();
      }

      sc.close();

      double d0 = 999999;
      int p = 0;

      for (int i = 0; i < N; i++) {

        double d1 = T - H[i] * 0.006;
        double d2 = Math.abs(A - d1);

        if (d2 <= d0){
          d0 = d2;
          p = i;
        }

      }

      System.out.println(p+1);

    }

  }
  ```
    