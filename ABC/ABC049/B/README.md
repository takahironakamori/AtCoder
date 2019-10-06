### ABC049

# B - たてなが / Thin

  [問題はこちら](https://atcoder.jp/contests/abc049/tasks/abc049_b)

- 発想<br>
  1 行ずつ文字列を取得するので、それらを 2 回ずつ出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int H, W;
    cin >> H >> W;

    vector<string> C(H);
    for (int i = 0; i < H; i++) {
      cin >> C[i];
    }

    for (int i = 0; i < H; i++) {
      cout << C[i] << endl;
      cout << C[i] << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int H = sc.nextInt();
      int W = sc.nextInt();
      String[] C = new String[H];

      for (int i = 0; i < H; i++) {
        C[i] = sc.next();
      }

      sc.close();

      for (int i = 0; i < H; i++) {
        System.out.println(C[i]);
        System.out.println(C[i]);
      }

    }

  }
  ```
    