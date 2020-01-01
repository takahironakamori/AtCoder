### ABC075

# B - Minesweeper

  [問題はこちら](https://atcoder.jp/contests/abc075/tasks/abc075_b)

- 発想<br>
  1 マスごとに . の場合は、8 方向にある # の数を数える。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int H, W;
    cin >> H >> W;

    vector<vector<string>> answer(H, vector<string>(W));

    for (int i = 0; i < H; i++) {
      string S;
      cin >> S;
      for (int j = 0; j < W; j++) {
        answer[i][j] = S[j];
      }
    }

    vector<int> dx = {1, 0, -1, 0, 1, -1, -1, 1};
    vector<int> dy = {0, 1, 0, -1, 1, 1, -1, -1};

    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        if (answer[i][j] == ".") {
          int count = 0;
          for (int d = 0; d < 8; d++) {
            int i_ = i + dy[d];
            int j_ = j + dx[d];
            if (i_ < 0 || H <= i_) {
              continue;
            }
            if (j_ < 0 || W <= j_) {
              continue;
            }
            if (answer[i_][j_] == "#") {
              count++;
            }
          }
          answer[i][j] = to_string(count);
        }
      }
    }

    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        cout << answer[i][j];
      }
      cout << endl;
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

      String[][] S = new String[H][W];

      for (int i = 0; i < H; i++) {
        String s = sc.next();
        S[i] = s.split("");
      }

      sc.close();

      for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
          if (S[i][j].equals(".")) {

            int count = 0;

            boolean checkU = true;
            boolean checkD = true;
            boolean checkR = true;
            boolean checkL = true;

            if (i == 0) {
              checkU = false;
            }
            if (i == H - 1){
              checkD = false;
            }
            if (j == 0) {
              checkL = false;
            }
            if (j == W - 1) {
              checkR = false;
            }

            if (checkU) {
              if (S[i-1][j].equals("#")){
                count++;
              }
            }

            if (checkD) {
              if (S[i+1][j].equals("#")){
                count++;
              }
            }

            if (checkL) {
              if (S[i][j-1].equals("#")){
                count++;
              }
            }

            if (checkR) {
              if (S[i][j+1].equals("#")){
                count++;
              }
            }

            if (checkU && checkL) {
              if (S[i-1][j-1].equals("#")){
                count++;
              }
            }

            if (checkU && checkR) {
              if (S[i-1][j+1].equals("#")){
                count++;
              }
            }

            if (checkD && checkL) {
              if (S[i+1][j-1].equals("#")){
                count++;
              }
            }

            if (checkD && checkR) {
              if (S[i+1][j+1].equals("#")){
                count++;
              }
            }

            S[i][j] = String.valueOf(count);

          }
        }
      }

      for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
          System.out.print(S[i][j]);
        }
        System.out.println("");
      }

    }

  }
  ```
    