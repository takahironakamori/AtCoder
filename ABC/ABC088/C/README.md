### ABC088

# C - Takahashi's Information

  [問題はこちら](https://atcoder.jp/contests/abc088/tasks/abc088_c)

- 発想
  <img src="../image_01.png" alt="図1" width="320px" height="auto">  
  <img src="../image_02.png" alt="図2" width="320px" height="auto">  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<vector<int>> c(3,vector<int>(3));

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        cin >> c[i][j];
      }
    }

    vector<int> a(3);
    vector<int> b(3);

    a[0] = 0;
    b[0] = c[0][0];
    b[1] = c[0][1];
    b[2] = c[0][2];
    a[1] = c[1][0] - b[0];
    a[2] = c[2][0] - b[0];

    string answer = "Yes";

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (c[i][j] != a[i] + b[j]) {
          answer = "No";
        }
      }
    }

    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      int[][] c = new int[3][3];

      Scanner sc = new Scanner(System.in);
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          c[i][j] = sc.nextInt();
        }
      }
      sc.close();

      int[] a = new int[3];
      int[] b = new int[3];

      a[0] = 0;
      b[0] = c[0][0];
      b[1] = c[0][1];
      b[2] = c[0][2];
      a[1] = c[1][0] - b[0];
      a[2] = c[2][0] - b[0];

      String answer = "Yes";

      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          if (c[i][j] != a[i] + b[j]) {
            answer = "No";
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    