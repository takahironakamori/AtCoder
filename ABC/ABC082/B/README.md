### ABC082

# B - Two Anagrams

  [問題はこちら](https://atcoder.jp/contests/abc082/tasks/abc082_b)

- 発想<br>
  s の各文字を昇順にソートし、t の各文字を降順にソートして s < t ならYesを出力する。<br>
  それ以外なら No を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s, t;
    cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.rbegin(), t.rend());

    if (s < t) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  import java.io.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String s = sc.next();
      String t = sc.next();

      sc.close();

      String[] S = s.split("");
      String[] T = t.split("");

      Arrays.sort(S);
      Arrays.sort(T, Comparator.reverseOrder());

      String s_ = "";
      String t_ = "";

      for (int i = 0; i < S.length; i++) {
        s_ += S[i];
      }

      for (int i = 0; i < T.length; i++) {
        t_ += T[i];
      }

      int c = s_.compareTo(t_);

      if (c < 0) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }

  }
  ```
    