### ABC102

# A - Multiple of 2 and N

  [問題はこちら](https://atcoder.jp/contests/abc102/tasks/abc102_a)


- 発想<br>
  N が 2で割り切れたら N をそのまま出力する。<br>
  そうでない場合は、N * 2 を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long N;
    cin >> N;

    if (N % 2 == 0) {
      cout << N << endl;
    } else {
      cout << N * 2 << endl;
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

      if (N % 2 == 0) {
        System.out.println(N);
      } else {
        System.out.println(N * 2);
      }

    }
  }
  ```
    