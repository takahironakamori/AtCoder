### ABC046

# D - AtCoDeerくんと変なじゃんけん / AtCoDeer and Rock-Paper

  [問題はこちら](https://atcoder.jp/contests/abc046/tasks/arc062_b)

- 発想<br>
  AtCoDeerくん勝つには、パー（p）を出す必要があるが、条件があるためパー（p）を出すことができる最大は、N / 2 回となる。<br>
  相手のTopCoDeerくんがすべてグー（g）だったら、AtCoDeerくんの得点は、N / 2 となる。<br>
  相手のTopCoDeerくんが 1 つパー（p）を出すと、AtCoDeerくんの得点は 1 点下がる。<br>
  すなわち、<br>
  AtCoDeerくんがパー（p）：TopCoDeerくんがグー（g) だったら、AtCoDeerくんの得点は 1 点。<br>
  AtCoDeerくんがパー（p）：TopCoDeerくんがパー（p) だったら、AtCoDeerくんの得点は 0 点。<br>
  となり、<br>
  AtCoDeerくんがグー（g）：TopCoDeerくんがグー（g) だったら、AtCoDeerくんの得点は 0 点。<br>
  AtCoDeerくんがグー（g）：TopCoDeerくんがパー（p) だったら、AtCoDeerくんの得点は -1 点。<br>
  となる。<br>
  したがって、AtCoDeerくんの最大得点は、N / 2 からTopCoDeerくんがパー（p）を出した回数を引けばいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    int p = 0;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'p') {
        p++;
      }
    }

    cout << s.size() / 2 - p << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main(String[] args) {

      Scanner sc = new Scanner(System.in);    
      String S = sc.next();
      sc.close();

      String[] s = S.split("");

      int p = 0;

      for (int i = 0; i < s.length; i++) {
        if (s[i].equals("p")) {
          p++;
        }
      }

      System.out.println(s.length / 2 - p);

    }

  }
  ```
    