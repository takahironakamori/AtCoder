### ABC080

# A - Parking

  [問題はこちら](https://atcoder.jp/contests/abc080/tasks/abc080_a)


- 発想<br>
  N * A と B で小さい方を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, A, B;
    cin >> N >> A >> B;

    if (N * A < B) {
      cout << N * A << endl;
    } else {
      cout << B << endl;
    }

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      int A = sc.nextInt();
      int B = sc.nextInt();

      if ((N * A) < B) {
        System.out.println((N * A));
      } else {
        System.out.println(B);
      }

    }
  }
  ```
    