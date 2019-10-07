### ABC036

# B - 回転

  [問題はこちら](https://atcoder.jp/contests/abc036/tasks/abc036_b)

- 発想
  [0][0],[0][1],[0][2],[0][3]<br>
  [1][0],[1][1],[1][2],[1][3]<br>
  [2][0],[2][1],[2][2],[2][3]<br>
  [3][0],[3][1],[2][2],[3][3]<br>
  を、<br>
  [3][0],[2][0],[1][0],[0][0]<br>
  [3][1],[2][1],[1][1],[0][1]<br>
  [3][2],[2][2],[1][2],[0][2]<br>
  [3][3],[2][3],[1][3],[0][3]<br>
  で出力すればいい。
  
  
- 実装のポイント<br>
  for文の 2 重ループを工夫する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<string> s(N);
    for (int i = 0; i < N; i++) {
      cin >> s[i];
    }

    for (int j = 0; j < N; j++) {
      for (int i = N - 1; 0 <= i; i--) {  
        cout << s[i][j];
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

      int N = sc.nextInt();
      String[][] s = new String[N][N];

      for (int i = 0; i < N; i++) {
        String s_ = sc.next();
        s[i] = s_.split("");
      }

      sc.close();

      for (int i = 0; i < N; i++) {
        for (int j = N - 1; 0 <= j; j--) {
          System.out.print(s[j][i]);
        }
        System.out.println("");
      }

    }

  }
  ```
    