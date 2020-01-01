### ABC072

# B - OddString

  [問題はこちら](https://atcoder.jp/contests/abc072/tasks/abc072_b)

- 発想<br>
  s を 1 文字おきに出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
      if (i % 2 == 0) {
        cout << s[i];
      }
    }

    cout << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int X = sc.nextInt();
      int t = sc.nextInt();

      if ((X - t) < 0) {
        System.out.println(0);
      } else {
        System.out.println(X - t);
      }

    }
  }
  ```
    