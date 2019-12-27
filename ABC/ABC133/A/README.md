### ABC133

# A - T or T

  [問題はこちら](https://atcoder.jp/contests/abc133/tasks/abc133_a)


- 発想<br>
  N * A と B で安い方を出力する。<br>
  


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, A, B;
    cin >> N >> A >> B;

    cout << min(N * A, B) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      int A = sc.nextInt();
      int B = sc.nextInt();
      sc.close();

      int train = N * A;
      int taxi = B;

      if (train < taxi){
        System.out.println(train);
      } else {
        System.out.println(taxi);
      }

    }

  }
  ```
    