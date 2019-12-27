### ABC141

# A - Weather Prediction

  [問題はこちら](https://atcoder.jp/contests/abc141/tasks/abc141_a)

- 発想<br>
  S が Sunny だったら、Cloudy<br>
  Cloudy だったら、Rainy<br>
  Rainy だったら、Sunny<br>
  を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    if (S == "Sunny") {
      cout << "Cloudy" << endl;
    } else if (S == "Cloudy") {
      cout << "Rainy" << endl;
    } else {
      cout << "Sunny" << endl;
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

      if (S.equals("Sunny")) {
        System.out.println("Cloudy");
      } else if (S.equals("Cloudy")) {
        System.out.println("Rainy");
      } else {
        System.out.println("Sunny");
      }

    }

  }
  ```
    