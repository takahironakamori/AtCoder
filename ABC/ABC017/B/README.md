### ABC017

# B - choku語

  [問題はこちら](https://atcoder.jp/contests/abc017/tasks/abc017_2)

- 発想<br>
  c, h, o, k, u 以外の文字があれば NO となる。<br>
  c の次が h でない場合は NO となる。<br>
  h の前が c でない場合は、 NO となる。
  
- 実装のポイント<br>
  文字列を1文字ずつ判定する方法（C++のコード）や<br>
  置換で、ch, o, k, u をすべて空白に置き換えて、残った文字列があれば NO とする方法（Javaのコード）がある。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string X;
    cin >> X;

    string answer = "YES";

    for (int i = 0; i < X.size(); i++) {
      if (X[i] != 'c' && X[i] != 'h' && X[i] != 'o' && X[i] != 'k' && X[i] != 'u') {
        answer = "NO";
        break;
      } else if (X[i] == 'c') {
        if (i == X.size() - 1) {
          answer = "NO";
          break;
        } else if (X[i + 1] != 'h'){
          answer = "NO";
          break;
        }
      } else if (X[i] == 'h') {
        if (i == 0) {
          answer = "NO";
          break;
        } else if (X[i - 1] != 'c'){
          answer = "NO";
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

      String X = sc.next();

      sc.close();

      X = X.replaceAll("ch", "");
      X = X.replaceAll("o", "");
      X = X.replaceAll("k", "");
      X = X.replaceAll("u", "");

      if (X.length() == 0) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }

  }
  ```
    