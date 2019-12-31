### ABC047

# B - すぬけ君の塗り絵 2 イージー / Snuke's Coloring 2 (ABC Edit)

  [問題はこちら](https://atcoder.jp/contests/abc047/tasks/abc047_b)

- 発想<br>
  W について、0 からどれだけ黒に塗りつぶすのかを把握する変数（ws）と<br>
  W からどれだけ黒に塗りつぶすのかを把握する変数（we）を用意する。<br>
  また、H について、0 からどれだけ黒に塗りつぶすのかを把握する変数（hs）と<br>
  H からどれだけ黒に塗りつぶすのかを把握する変数（he）を用意する。<br>
  a が 1 の場合の ws と x で大きい方を ws で保持する。<br>
  a が 2 の場合の we と H - x で大きい方を we で保持する。<br>
  a が 3 の場合の hs と y で大きい方を hs で保持する。<br>
  a が 4 の場合の he と H - x で大きい方を he で保持する。<br>
  白い部分の面積は (W - we - ws) × (H - he - hs) となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int W, H, N;
    cin >> W >> H >> N;

    vector<int> x(N);
    vector<int> y(N);
    vector<int> a(N);

    int ws = 0;
    int we = 0;
    int hs = 0;
    int he = 0;

    for (int i = 0; i < N; i++) {
      cin >> x[i] >> y[i] >> a[i];
    }

    for (int i = 0; i < N; i++) {
      if (a[i] == 1) {
        ws = max(ws, x[i]); 
      } else if (a[i] == 2) {
        we = max(we, W - x[i]);
      } else if (a[i] == 3) {
        hs = max(hs, y[i]);
      } else {
        he = max(he, H - y[i]);
      }
    }

    W = W - we - ws;
    H = H - he - hs;

    if (W <= 0 || H <= 0) {
      cout << 0 << endl;
    } else {
      cout << W * H << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int W = sc.nextInt();
      int H = sc.nextInt();
      int N = sc.nextInt();
      int[] x = new int[N];
      int[] y = new int[N];
      int[] a = new int[N];

      for (int i = 0; i < N; i++) {
        x[i] = sc.nextInt();
        y[i] = sc.nextInt();
        a[i] = sc.nextInt();
      }

      sc.close();

      int ans = 0;

      int startX = 0;
      int startY = 0;
      int endX = W;
      int endY = H;

      for (int i = 0; i < N; i++) {
        if (a[i] == 1) {
          startX = Math.max(startX, x[i]);
        } else if (a[i] == 2) {
          endX = Math.min(endX, x[i]);
        } else if (a[i] == 3) {
          startY = Math.max(startY, y[i]);
        } else {
          endY = Math.min(endY, y[i]);
        }
      }

      if (0 < (endX - startX) && 0 < (endY - startY)) {
        ans = (endX - startX) * (endY - startY);
      }

      System.out.println(ans);

    }

  }
  ```
    