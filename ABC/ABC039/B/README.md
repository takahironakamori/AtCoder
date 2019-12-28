### ABC039

# B - エージェント高橋君

  [問題はこちら](https://atcoder.jp/contests/abc039/tasks/abc039_b)

- 発想<br>
  pow(X, 0.25) または sqrt(sqrt(X)) を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int X;
    cin >> X;

    cout << pow(X, 0.25) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int X = sc.nextInt();

      sc.close();

      System.out.println((int) Math.sqrt(Math.sqrt(X)));

    }

  }
  ```
    