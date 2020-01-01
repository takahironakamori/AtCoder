### ABC079

# B - Lucas Number

  [問題はこちら](https://atcoder.jp/contests/abc079/tasks/abc079_b)


- 発想<br>
  大きい数字が入る配列を作り、<br>
  配列\[0] = 2<br>
  配列\[1] = 1<br>
  配列\[i] = 配列\[i - 1] + 配列\[i - 2]<br>
  i を 2 から N まで繰り返して、配列\[N] を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<long long> answer(N + 1);

    answer[0] = 2;
    answer[1] = 1;

    for (int i = 2; i <= N; i++) {
      answer[i] = answer[i - 1] + answer[i - 2];
    }

    cout << answer[N] << endl;

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

      long result[] = new long[N+1];

      result[0] = 2;
      result[1] = 1;

      for (int i = 2; i < N+1; i++) {
        result[i] = result[i-1] + result[i-2];
      }

      System.out.println(result[N]);

    }

  }
  ```
    