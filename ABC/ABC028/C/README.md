### ABC028

# C - 数を3つ選ぶマン

  [問題はこちら](https://atcoder.jp/contests/abc028/tasks/abc028_d)

- 発想<br>
  A < B < C < D < E なので、<br>
  E + D + C が、必ず最も大きい。<br>
  E + D + B が、必ず 2 番目に大きい。<br>
  3番目は、E + D + A と E + C + B　のどちらが大きいかは数値によるので、比較して大きい方を出力する。 
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    cout << max(E + D + A, E + C + B) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int A = sc.nextInt();
      int B = sc.nextInt();
      int C = sc.nextInt();
      int D = sc.nextInt();
      int E = sc.nextInt();

      sc.close();

      System.out.println(Math.max((A + D + E),(B + C + E)));

    }

  }
  ```
    