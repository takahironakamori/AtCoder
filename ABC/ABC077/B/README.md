### ABC077

# B - Around Square

  [問題はこちら](https://atcoder.jp/contests/abc077/tasks/abc077_b)


- 発想<br>
  N の平方根を切り捨てで求め、その値を 2 乗する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int v = floor(sqrt(N));

    cout << v * v << endl;

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

      for (int i = N; 1 <= N; i--) {
        double j = Math.sqrt(i);
        if (j % 1 == 0) {
          System.out.println(i);
          break;
        }
      }

    }

  }
  ```
    