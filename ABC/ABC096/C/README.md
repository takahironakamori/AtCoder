### ABC096

# C - Grid Repainting 2

  [問題はこちら](https://atcoder.jp/contests/abc096/tasks/abc096_c)

- 発想<br>
  #がついたマスの上下左右どれかのマスに#がないと塗ることはできず目標は達成できない。

- 実装のポイント<br>
  シンプルなルールで実装すると、だぶって確認してしまうマスもあるが、マス自体数が小さいのであまり気にしない。<br>
  C++には、多重ループを簡単に抜ける方法がないので、countなど適切なフラグを用意する。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int H, W;
    cin >> H >> W;

    vector<string> s(H);
    for (int i = 0; i < H; i++) {
      cin >> s[i];
    }

    vector<int> p = {-1, 1};

    int count = 0;

    for (int i = 0; i < H; i++) {

      for (int j = 0; j < W; j++) {

        if (s[i][j] == '#') {

          string result = "No";

          for (int k = 0; k < 2; k++) {
            if (0 <= j + p[k] && j + p[k] < W) {
              if (s[i][j + p[k]] == '#') {
                result = "Yes";
              }
            }
            if (0 <= i + p[k] && i + p[k] < H) {
              if (s[i + p[k]][j] == '#') {
                result = "Yes";
              }
            }
          }

          if (result == "No") {
            count++;
            break;
          }

        } 

      }

      if (count != 0) {
        break;
      }

    } 

    if (count == 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
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
      String[][] s = new String[H][W];

      for (int i = 0; i < H; i++) {
        String s_ = sc.next();
        s[i] = s_.split("");
      }

      sc.close(); 

      int[] p = {-1,1};

      for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

          if (s[i][j].equals("#")) {

            String result = "No";

            for (int k = 0; k < 2; k++){
              if (0 <= j + p[k] && j + p[k] < W) {
                if (s[i][j+p[k]].equals("#")) {
                  result = "Yes";
                }
              }
              if (0 <= i + p[k] && i + p[k] < H) {
                if (s[i+p[k]][j].equals("#")) {
                  result = "Yes";
                }
              }
            }

            if (result == "No") {
              System.out.println("No");
              return;
            } 

          }

        }
      }

      System.out.println("Yes");

    }

  }
  ```
    