### ABC036

# A - お茶

  [問題はこちら](https://atcoder.jp/contests/abc036/tasks/abc036_a)

- 発想<br>
  B / A（小数点以下切り上げ）をする。
  

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
    