### ABC088

# A - Infinite Coins

  [問題はこちら](https://atcoder.jp/contests/abc088/tasks/abc088_a)


- 発想<br>
  N % 500 が A 以下なら Yes<br>
  そうでない場合は No を出力。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, A;
    cin >> N >> A;

    if (N % 500 <= A) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
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

      if (N % 500 <= A) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }
  }
  ```
    