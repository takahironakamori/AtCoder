### ABC043

# B - バイナリハックイージー / Unhappy Hacking (ABC Edit)

  [問題はこちら](https://atcoder.jp/contests/abc043/tasks/abc043_b)

- 発想
  
  シミュレーション。
  
  
- 実装のポイント

  文字列操作について<br>
  C++で 文字列.[i] は char 型なので 'A' シングルコーテーションを使って比較する。<br>
  キュー（Deque）を使っても簡単にできる。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    string result = "";
    for (int i = 0; i < s.length(); i++) {

      if (s[i] == '0') {
        result += "0";
      } else if (s[i] == '1') {
        result += "1";
      } else {
        if (!result.empty()) {
          result.erase(result.length() - 1);
        }
      }

    }

    cout << result << endl;

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

      String[] s = S.split("");

      Deque<String> deque = new ArrayDeque<>();

      for (int i = 0; i < s.length; i++) {
        if (s[i].equals("0")) {
          deque.addLast("0");
        } else if (s[i].equals("1")) {
          deque.addLast("1");
        } else {
          if (0 < deque.size()) {
            deque.pollLast();
          }
        }
      }

      String result = "";

      for (String value : deque) {
        result += value;
      }

      System.out.println(result);

    }

  }
  ```
    