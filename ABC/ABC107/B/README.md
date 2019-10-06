### ABC107

# B - Grid Compression

  [問題はこちら](https://atcoder.jp/contests/abc107/tasks/abc107_b)

- 発想<br>
  各行と各列に#が一つもない場合は表示しない。
  
- 実装のポイント<br>
  表示しない行と表示しない列を愚直に調べていく。<br>
  表示しない行と表示しない列に該当しない場合は表示する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int H, W;
    cin >> H >> W;

    vector<string> a(H);
    for (int i = 0; i < H; i++) {
      cin >> a[i];
    }

    vector<bool> deleteH(H);
    vector<bool> deleteW(W);

    for (int i = 0; i < H; i++) {
      bool valid = true;
      for (int j = 0; j < W; j++) {
         if (a[i][j] == '#') {
           valid = false;
         }
      }
      if (valid) {
        deleteH[i] = true;
      }
    }

    for (int i = 0; i < W; i++) {
      bool valid = true;
      for (int j = 0; j < H; j++) {
         if (a[j][i] == '#') {
           valid = false;
         }
      }
      if (valid) {
        deleteW[i] = true;
      }
    } 

    for (int i = 0; i < H; i++) {
      if (!deleteH[i]) {
        for (int j = 0; j < W; j++) {
          if (!deleteW[j]) {
            cout << a[i][j];
          }
        }
        cout << endl;
      }
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
      String[][] a = new String[H][W];

      for (int i = 0; i < H; i++) {
        String a_ = sc.next();
        a[i] = a_.split("");
      }

      sc.close();

      boolean[] deleteH = new boolean[H];
      boolean[] deleteW = new boolean[W];

      for (int i = 0; i < H; i++) {
        boolean valid_ = true;
        for (int j = 0; j < W; j++) {
          if (a[i][j].equals("#")) {
            valid_ = false;
            break;
          }
        }
        if (valid_) {
          deleteH[i] = true;
        }
      }

      for (int i = 0; i < W; i++) {
        boolean valid_ = true;
        for (int j = 0; j < H; j++) {
          if (a[j][i].equals("#")) {
            valid_ = false;
            break;
          }
        }
        if (valid_) {
          deleteW[i] = true;
        }
      }

      for (int i = 0; i < H; i++) {
        if (!deleteH[i]) {
          for (int j = 0; j < W; j++) {
            if (!deleteW[j]){
              System.out.print(a[i][j]);
            }
          }
          System.out.println("");
        }
      }

    }

  }
  ```
    