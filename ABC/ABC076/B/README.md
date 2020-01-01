### ABC076

# B - Addition and Multiplication

  [問題はこちら](https://atcoder.jp/contests/abc076/tasks/abc076_b)


- 発想<br>
  K を超えるまでは操作 A を繰り返し、K を超えたら操作 B を繰り返す。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    int answer = 1;

    for (int i = 0; i < N; i++) {
      if (answer < K) {
        answer *= 2;
      } else {
        answer += K;
      }
    }

    cout << answer << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int K = sc.nextInt();

      sc.close();

      int current = 1;

      for (int i = 0; i < N; i++) {
        if (current < K) {
          current = current * 2;
        } else {
          current += K;
        }
      }

      System.out.println(current);

    }

  }
  ```
    