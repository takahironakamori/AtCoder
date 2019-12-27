### ABC131

# A - Security

  [問題はこちら](https://atcoder.jp/contests/abc131/tasks/abc131_a)

- 発想<br>
  1 文字目と 2 文字目、<br>
  または 2 文字目と 3 文字目、<br>
  または 3 文字目と 4 文字目のいずれかが同じ文字であれば Bad <br>
  そうでない場合は Good を出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    char current;
    string answer = "Good";

    for (int i = 0; i < S.size(); i++) {
      if (current == S[i]) {
        answer = "Bad";
        break;
      } else {
        current = S[i];
      }
    }

    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {

    public static String S;
    public static String[] arr;

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      S = sc.next();
      sc.close();
      String[] arr_ = S.split("");

      String result = "Bad";

      if (!arr_[0].equals(arr_[1])) {

        if (!arr_[1].equals(arr_[2]))  {

          if (!arr_[2].equals(arr_[3]))  {
            result = "Good";
          }

        }

      }

      System.out.println(result);

    }

  }
  ```
    