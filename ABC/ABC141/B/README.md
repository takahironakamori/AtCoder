### ABC141

# B - Tap Dance

  [問題はこちら](https://atcoder.jp/contests/abc141/tasks/abc141_b)


- 発想<br>
  奇数文字目に L が 1 文字でもある、または偶数番目に R が 1 文字でもある場合は No になり、<br>
  それ以外の場合は Yes となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    string answer = "Yes";

    for (int i = 0; i < S.size(); i++) {
      if (i % 2 == 0) {
        if(S[i] == 'L') {
          answer = "No";
          break;
        }
      } else {
        if(S[i] == 'R') {
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

      String s = sc.next();

      sc.close();

      String[] S = s.split("");

      String result = "Yes";

      for (int i = 0; i < S.length; i++) {
        if (i % 2 == 0) {
          if(!(S[i].equals("R")) && !(S[i].equals("U")) && !(S[i].equals("D"))) {
            result = "No";
            break;
          }
        } else {
          if(!(S[i].equals("L")) && !(S[i].equals("U")) && !(S[i].equals("D"))) {
            result = "No";
            break;
          }
        }
      } 

      System.out.println(result);

    }

  }
  ```
    