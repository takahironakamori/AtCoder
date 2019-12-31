### ABC062

# B - Picture Frame

  [問題はこちら](https://atcoder.jp/contests/abc062/tasks/abc062_b)


- 発想<br>
  入力で文字列を取得するときに、前後に # をつけておく。<br>
  W + 2 だけ # を繋げた文字列を a を出力する前後に出力する。<br>
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int H, W;
    cin >> H >> W;

    vector<string> a(H);
    for (int i = 0; i < H; i++) {
      string a_;
      cin >> a_;
      a[i] = "#" + a_ + "#";
    }

    for (int i = 0; i < W + 2; i++) {
      cout << "#";
    }
    cout << endl;

    for (int i = 0; i < H; i++) {
      cout << a[i] << endl;
    }

    for (int i = 0; i < W + 2; i++) {
      cout << "#";
    }
    cout << endl;

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
      String[] a = new String[H];

      for (int i = 0; i < H; i++) {
        a[i] = sc.next();
      }

      sc.close();

      for (int i = 0; i < W + 2; i++) {
        System.out.print("#");
      }

      System.out.println("");

      for (int i = 0; i < H; i++) {
        System.out.print("#");
        System.out.print(a[i]);
        System.out.println("#");
      }

      for (int i = 0; i < W + 2; i++) {
        System.out.print("#");
      }

      System.out.println("");

    }

  }
  ```
    