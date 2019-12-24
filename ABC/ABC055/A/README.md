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

    cout << N * 800 - (N / 15) * 200 << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();

      int x = N * 800;
      int y = N / 15 * 200;

      System.out.println(x - y);

    }
  }
  ```
    