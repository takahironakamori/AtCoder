### ABC055

# B - Training Camp

  [問題はこちら](https://atcoder.jp/contests/abc055/tasks/abc055_b)

- 発想
  
  N! を 10^9 + 7 で割ったあまりを計算する。<br>
  N! そのものは大きくなるので、更新する度に 10^9 + 7 割ったあまりを計算する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    long result = 1;

    int mod = 1000000007;

    for (int i = 1; i <= N; i++) {
      result = (result * i) % mod;
    }

    cout << result << endl;

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

      int mod = 1000000007;

      long result = 1;

      for (int i = 1; i <= N; i++) {
        result = (long) result * i % mod; 
      }

      System.out.println(result);

    }

  }
  ```
    