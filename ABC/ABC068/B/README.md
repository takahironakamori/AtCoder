### ABC068

# B - Break Number

  [問題はこちら](https://atcoder.jp/contests/abc068/tasks/abc068_b)


- 発想<br>
  カウンタ i を用意する。<br>
  N を超えるまで 2 の i 乗をする。<br>
  2 の i - 1 乗が回答となる。
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    bool flg = true;
    int current = 0;
    int v = 0;

    while (flg) {
      v = pow(2, current);
      if (N < v) {
        flg = false;
      } else {
        current++;
      }
    }

    cout << pow(2, current - 1) << endl;

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

      int sum = 0;
      int count = 0;

      while (sum <= N) {
        count++;
        sum = (int) Math.pow(2, count);
      }

      System.out.println((int) Math.pow(2, count - 1));

    }

  }
  ```
    