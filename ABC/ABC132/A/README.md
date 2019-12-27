### ABC132

# A - Fifty-Fifty

  [問題はこちら](https://atcoder.jp/contests/abc132/tasks/abc132_a)


- 発想<br>
  以下の場合は、Yesになる。<br>
  ・1 文字目と 2 文字目が同じ、かつ、3 文字目と 4 文字目が同じ、かつ、1 文字目と 3 文字目が異なる<br>
  ・1 文字目と 3 文字目が同じ、かつ、2 文字目と 4 文字目が同じ、かつ、1 文字目と 2 文字目が異なる<br>
  ・1 文字目と 4 文字目が同じ、かつ、2 文字目と 3 文字目が同じ、かつ、1 文字目と 2 文字目が異なる<br>
  （Java のコード）<br>
  または、<br>
  使われている文字の種類が 2 種類で、<br>
  それぞれ 2 回ずつ使用している場合は Yesになる。（C++ のコード）<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    vector<int> ascii(26);

    for (int i = 0; i < S.size(); i++) {
      ascii[S[i] - 'A']++;
    }

    string answer = "Yes";

    for (int i = 0; i < 26; i++) {
      if (ascii[i] != 0 && ascii[i] != 2) {
        answer = "No";
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
      sc.close();

      String res = "No";
      String[] s = S.split("");

      if (s[0].equals(s[1]) && s[2].equals(s[3])) {
        if (!s[0].equals(s[2])){
          res = "Yes";
        }
      }

      if (s[0].equals(s[2]) && s[1].equals(s[3])) {
        if (!s[0].equals(s[1])){
          res = "Yes";
        }
      }

      if (s[0].equals(s[3]) && s[1].equals(s[2])) {
        if (!s[0].equals(s[1])){
          res = "Yes";
        }
      }

      System.out.println(res);

    }

  }
  ```
    