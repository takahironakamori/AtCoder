### ABC140

# A - Password

  [問題はこちら](https://atcoder.jp/contests/abc140/tasks/abc140_a)

- 発想<br>
  N の 3 乗を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    cout << pow(N, 3) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();

      sc.close();

      System.out.println((int) Math.pow(N, 3));

    }

  }
  ```
    