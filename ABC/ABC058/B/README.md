### ABC058

# B - ∵∴∵

  [問題はこちら](https://atcoder.jp/contests/abc058/tasks/abc058_b)


- 発想<br>
  O と E で交互に 1 文字ずつ出力する。<br>
  O の方が 1 文字多い場合があるので注意する。<br>  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string O, E;
    cin >> O >> E;

    if (O.size() == E.size()) {

      for (int i = 0; i < O.size(); i++) {
        cout << O[i] << E[i];
      }
      cout << endl;

    } else {

      for (int i = 0; i < O.size() - 1; i++) {
        cout << O[i] << E[i];
      }
      cout << O[O.size() - 1] << endl;

    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String o = sc.next();
      String e = sc.next();

      sc.close();

      String[] O = o.split("");
      String[] E = e.split("");

      int count = O.length + E.length;

      int i = 0;

      while (i < count) {
        if (i % 2 == 0){
          System.out.print(O[i/2]);
        } else {
          System.out.print(E[i/2]);
        }
        i++;
      }

      System.out.println("");

    }

  }
  ```
    