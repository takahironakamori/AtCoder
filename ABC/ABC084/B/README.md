### ABC084

# B - Postal Code

  [問題はこちら](https://atcoder.jp/contests/abc084/tasks/abc084_b)


- 発想<br>
  A 文字目までは全て数字であること。<br>
  A + 1 文字目は - であること。<br>
  A + 2 文字目から B 文字目までは全て数字あること。<br>
  以上を確認する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    string S;
    cin >> S;

    string answer = "Yes";

    for (int i = 0; i < A; i++) {
      if ((S[i] - '0') < 0 || 9 < (S[i] - '0')) {
        answer = "No";
        break;
      }
    }

    if (answer == "Yes") {
      if (S[A] != '-') {
        answer = "No";
      }
    }

    if (answer == "Yes") {
      for (int i = 0; i < B; i++) {
        if ((S[A + 1 + i] - '0') < 0 || 9 < (S[A + 1 + i] - '0')) {
          answer = "No";
          break;
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

      Scanner sc = new Scanner(System.in);

      int A = sc.nextInt();
      int B = sc.nextInt();
      String s = sc.next();

      sc.close();

      String[] S = s.split("");

      String result = "Yes";

      for (int i = 0; i < S.length; i++) {

        if (S.length != A + B + 1) {
          result = "No";
          break;
        }

        if (i == A && !S[i].equals("-")) {
          result = "No";
          break;
        }

        if (i < A || A < i) {
          if (!S[i].equals("-")) {
            int n_ = Integer.valueOf(S[i]);
            if (n_ < 0 || 9 < n_) {
              result = "No";
              break;
            }
          } else {
            result = "No";
            break;
          }
        }

      }

      System.out.println(result);

    }

  }
  ```
    