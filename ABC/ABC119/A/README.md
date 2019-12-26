### ABC119

# A - Still TBD

  [問題はこちら](https://atcoder.jp/contests/abc119/tasks/abc119_a)

- 発想<br>
  A が B で割り切れれば、A + B <br>
  そうでなければ、B - A を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;
    
    int month = (S[5] - '0') * 10 + S[6] - '0';

    string answer = "";

    if (4 < month) {
      answer = "TBD";
    } else {
      answer = "Heisei";
    }

    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String S = sc.next();
      int S1 = Integer.parseInt(S.substring(5,7));

    if (S1 < 5) {
      System.out.println("Heisei");
    } else {
      System.out.println("TBD");
    }

    }
  }
  ```
    