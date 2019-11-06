### ABC003

# A - AtCoder社の給料

  [問題はこちら](https://atcoder.jp/contests/abc003/tasks/abc003_1)

- 発想<br>
  n 回ループしてもいいし、1 から n までの合計（N(N+1)/2）で計算してもいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    double answer = 0;
    for (int i = 1; i <= N; i++) {
      answer += (double) 10000 * i / N;
    }

    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      int A = 0;
      A = N * (N + 1) / 2;
      System.out.println( A * 10000 / N);
    }
  }
  ```
    