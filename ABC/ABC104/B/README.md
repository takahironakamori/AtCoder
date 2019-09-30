### ABC104

# B - AcCepted

  [問題はこちら](https://atcoder.jp/contests/abc104/tasks/abc104_b)

- 発想
  
  a_1, から a_N までの最小公倍数を M すれば、M mod a_1, ..., M mod a_N すべてのあまりは 0 になる。<br>
  そして、(M - 1) mod a_1 と、あまりは (a_i - 1) になり、あまりを最大化になる。
  
- 実装のポイント

  あまりは (a_i - 1) になることがわかっているので、a_1, から a_N までの最小公倍数を M を求めるまでもない。<br>
  ループで、(a_i - 1) を加えていけばいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    string res = "AC";

    if ((int) S.at(0) != 65) {
      res = "WA";
    }

    int countC = 0;
    int positionC = 0;

    for (int i = 2; i < S.size() - 1; i++) {

      int s = (int) S.at(i);

      if (s == 67) {
        countC++;
        positionC = i;
      }

    }

    if (countC != 1) {
      res = "WA";
    }

    for (int i = 1; i < S.size(); i++) {

      int s = (int) S.at(i);

      if (i != positionC) {
        if (s < 97 || 122 < s) {
          res = "WA";
          break;
        }
      }

    }

    cout << res << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String S = sc.next();

      sc.close();

      String result = "WA";

      char[] s = S.toCharArray();
      String[] s_= S.split("");

      if (s_[0].equals("A")) {

        int count = 0;
        int position = 0;

        for (int i = 2; i <= s_.length - 2; i++) {
          if (s_[i].equals("C")) {
            count++;
            position = i;
          }
        }

        if (count == 1) {
          for (int i = 1; i < s.length; i++) {
            if (i != position){
              if (97 <= (int)s[i] && (int)s[i] <= 122) {
                result = "AC";
              } else {
                result = "WA";
                break;
              }
            }
          }
        }

      }

      System.out.println(result);

    }

  }
  ```
    