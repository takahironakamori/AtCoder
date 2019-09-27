### ABC130

# C - Rectangle Cutting

  [問題はこちら](https://atcoder.jp/contests/abc130/tasks/abc130_c)

- 発想
  
  (x, y) と長方形の中点を結ぶ直線で長方形を2つに分けると、面積が1/2ずつになるのが、面積の大きくない方の面積の最大値になるパターン。<br>
  また、(x, y) が長方形の中点と同じであれば、どの角度の直接でも面積が1/2ずつになるため、分割の方法は複数存在する。
  
- 実装のポイント
  
  計算過程で小数点となる箇所が多いので、型に注意する。<br>
  C++で小数点で表示する場合は、cout << fixed << setprecision(15);

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long W, H, x, y;
    cin >> W >> H >> x >> y;

    int f = 0;

    if (double(x) == (double(W) / 2) && double(y) == (double(H) / 2)) {
      f = 1;
    }

    cout << fixed << setprecision(15);
    cout << double(W) * double(H) / 2.0 << " " << f << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      double W = sc.nextInt();
      double H = sc.nextInt();
      int x = sc.nextInt();
      int y = sc.nextInt();

      sc.close();

      int flg = 0;

      if (x == W /2 && y == H / 2){
        flg = 1;
      }

      System.out.println(W * H / 2 + " " + flg);

    }

  }
  ```
    