### ABC121

# A - White Cells

  [問題はこちら](https://atcoder.jp/contests/abc121/tasks/abc121_a)

- 発想<br>
  (H - h) * (W - w) を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int H, W, h, w;
    cin >> H >> W >> h >> w;

    cout << (H - h) * (W - w) << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int H = sc.nextInt();
      int W = sc.nextInt();
      int h = sc.nextInt();
      int w = sc.nextInt();

      System.out.println((H * W) - (h * W + H * w - h * w));

    }
  }
  ```
    