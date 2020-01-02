### ABC103

# B - String Rotation

  [問題はこちら](https://atcoder.jp/contests/abc103/tasks/abc103_b)


- 発想<br>
  S を回転させた文字列を S の長さだけ行い、T と一致するかを調べる。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S, T;
    cin >> S >> T;

    string answer = "No";

    for (int i = 0; i < S.size(); i++) {
      string s_ = S.substr(i, S.size() - i);
      s_ += S.substr(0, i);
      if (s_ == T) {
        answer = "Yes";
        break;
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

      String S = sc.next();
      String T = sc.next();

      sc.close();

      String[] s = S.split("");

      int[] arr = new int[s.length];

      String result = "No";

      for (int i = 0; i < s.length; i++) {

        for (int j = 0; j < s.length; j++) {

          if (i + j < s.length) {
            arr[j] = i + j;
          } else {
            arr[j] = i + j - s.length;
          }

        }

        String s_ = "";

        for (int j = 0; j < s.length; j++) {
          s_ += s[arr[j]];
        }

        if (s_.equals(T)){
          result = "Yes";
          break;
        }

      }

      System.out.println(result);

    }

  }
  ```
    