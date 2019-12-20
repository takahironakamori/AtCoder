### ABC044

# A - 高橋君とホテルイージー / Tak and Hotels (ABC Edit)

  [問題はこちら](https://atcoder.jp/contests/abc045/tasks/abc045_b)

- 発想
  
  愚直にシミュレーションする。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K, X, Y;
    cin >> N >> K >> X >> Y;

    int answer = 0;

    if (N <= K) {
      answer = N * X;
    } else {
      answer = K * X + (N - K) * Y;
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
      int K = sc.nextInt();
      int X = sc.nextInt();
      int Y = sc.nextInt();

      if (N < K) {
        System.out.println(N * X);
      } else {
        System.out.println((K * X) + ((N - K) * Y));
      }

    }
  }
  ```
    