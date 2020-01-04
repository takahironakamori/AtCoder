### ABC139

# A - Tenki

  [問題はこちら](https://atcoder.jp/contests/abc139/tasks/abc139_a)


- 発想<br>
  1 文字ずつ同じ文字の数を数える。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S, T;
    cin >> S >> T;

    int answer = 0;

    for (int i = 0; i < 3; i++) {
      if (S[i] == T[i]) {
        answer++;
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
      String t = sc.next();

      sc.close();

      String[] S = s.split("");
      String[] T = t.split("");

      int count = 0;

      for (int i = 0; i < 3; i++) {
        if (S[i].equals(T[i])) {
          count++;
        }
      }

      System.out.println(count);

    }

  }
  ```
    