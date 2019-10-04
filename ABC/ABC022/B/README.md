### ABC022

# B - Bumble Bee

  [問題はこちら](https://atcoder.jp/contests/abc022/tasks/abc022_b)

- 発想<br>
  A_1 から A_N までで、登場した数値の個数を数える。<br>
  数値の個数が 2 以上の場合の、数値の個数 - 1 を数えた合計が回答となる。
  
  
- 実装のポイント<br>
  大きめの配列を用意して、A_1 から A_N までで、使われている数の個数を数える。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> A(100100);
    for (int i = 0; i < N; i++) {
      int i_;
      cin >> i_;
      A[i_]++;
    }

    int count = 0;

    for (int i = 0; i < 100100; i++) {
      if (1 < A[i]) {
        count += A[i] - 1;
      }
    }

    cout << count << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      Integer[] check = new Integer[100100];

      for (int i = 0; i < check.length; i++) {
        check[i] = 0;
      }

      int _a = 0;

      for (int i = 0; i < N; i++) {
        _a = sc.nextInt();
        check[_a] = check[_a] + 1;
      }

      int count = 0;

      for (int i = 0; i < check.length; i++) {
        if (1 < check[i]) {
          count = count + check[i] - 1;
        }
      }

      System.out.println(count);

    }
  }
  ```
    