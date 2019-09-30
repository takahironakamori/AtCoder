### ABC139

# B - Power Socket

  [問題はこちら](https://atcoder.jp/contests/abc139/tasks/abc139_b)

- 発想
  
  A を 1 個から 2 個に増やすとき、差し込み口は A から (A - 1 + A) になる。<br>
  すなわち、差し込み口の数 = (1つ前の差し込み口の数 - 1 + A) となる。<br>
  これを B 以上になるまで繰り返す。<br>
  しかし、B が 1 の場合は、電源タップは必要ないので、0 が答えになる。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    int count = 0;
    int sum = A;

    while (sum < B) {
      count++;
      sum = sum - 1 + A;
    }

    if (B == 1) {
      count = 0;
    }

    cout << count << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int A = sc.nextInt();
      int B = sc.nextInt();

      sc.close();

      int count = 1;
      int sum = A;

      while (sum < B) {
        count++;
        sum = sum - 1 + A;
      }

      if (B == 1){
        count = 0;
      }

      System.out.println(count);

    }

  }
  ```
    