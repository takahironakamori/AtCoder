### ABC137

# B - One Clue

  [問題はこちら](https://atcoder.jp/contests/abc137/tasks/abc137_b)


- 発想<br>
  X - K + 1 から X + K - 1 までを出力する。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int K, X;
    cin >> K >> X;

    for (int i = X - K + 1; i <= X + K - 1; i++) {
      cout << i << " ";
    }

    cout << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int K = sc.nextInt();
      int X = sc.nextInt();

      sc.close(); 

      for (int i = X - K + 1; i < K + X; i++) {
        System.out.print(i + " ");
      }

      System.out.println("");

    }

  }
  ```
    