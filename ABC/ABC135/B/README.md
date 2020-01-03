### ABC135

# B - 0 or 1 Swap

  [問題はこちら](https://atcoder.jp/contests/abc135/tasks/abc135_b)


- 発想<br>
  p_1 が 1、p_2 が 2 ... p_N が N でない箇所の数が 2 個（2 個か 0 個）以下の場合は、YES となる。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int count = 0;

    for (int i = 1; i <= N; i++) {
      int p;
      cin >> p;
      if (p != i) {
        count++;
      } 
    }

    if (count <= 2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {

    public static void main (String[] args) {

      Scanner scanner = new Scanner(System.in);

      int A = scanner.nextInt();
      int B = scanner.nextInt();

      scanner.close();

      if((A + B) % 2 == 0){
        System.out.println((A + B) / 2 );
      }else {
        System.out.println("IMPOSSIBLE");
      }

    }

  }
  ```
    