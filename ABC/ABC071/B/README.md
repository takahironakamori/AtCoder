### ABC071

# B - Not Found

  [問題はこちら](https://atcoder.jp/contests/abc071/tasks/abc071_b)

- 発想<br>
  T_1 から T_N までの最小公倍数を求めればいい。
  
- 実装のポイント<br>
  複数の値の最小公倍数は、ループで求めればいい。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    vector<int> s(26);

    for (int i = 0; i < S.size(); i++) {
      s[(int) S.at(i) - 97]++;
    }

    string result = "";

    for (int i = 0; i < 26; i++) {
      if (s[i] == 0) {
        result += char(i+97);
        break;
      }
    }

    if (result == "") {
      cout << "None" << endl;
    } else {
      cout << result << endl;
    }

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

      String result = "None";

      int[] count = new int[26];

      for (int i = 0; i < S.length(); i++) {
        count[(int) S.charAt(i) - 97]++;
      }

      for (int i = 0; i < 26; i++) {
        if (count[i] == 0) {
          result = String.valueOf((char) (i+97));
          break;
        }
      }

      System.out.println(result);
    }

  }
  ```
    