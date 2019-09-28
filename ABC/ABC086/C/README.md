### ABC086

# C - Traveling

  [問題はこちら](https://atcoder.jp/contests/abc086/tasks/arc089_a)

- 発想
  
  N 秒後に (x_N, y_N) にいることができるかを順番にシミュレーションする。<br>
  距離は、x[i] + y[i] で算出。<br>
  距離が t[i] を超過する場合はたどり着けない。<br>
  また、距離とNの偶奇が一致していないとたどり着けない。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> t(N);
    vector<int> x(N);
    vector<int> y(N);

    for (int i = 0; i < N; i++) {
      cin >> t[i] >> x[i] >> y[i];
    }

    string result = "Yes";

    for (int i = 0; i < N; i++) {

      int distance = x[i] + y[i];

      if (t[i] < distance) {
        result = "No";
        break;
      } else if (distance % 2 != t[i] % 2) {
        result = "No";
        break;
      }
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
      int[] t = new int[N];
      int[] x = new int[N];
      int[] y = new int[N];

      for (int i = 0; i < N; i++) {
        t[i] = sc.nextInt();
        x[i] = sc.nextInt();
        y[i] = sc.nextInt();
      }

      sc.close();

      String result = "Yes";

      for (int i = 0; i < N; i++) {

        if (t[i] < x[i] + y[i]) {
          result = "No";
          break;
        } else {
          if (((x[i] + y[i]) % 2) != (t[i] % 2)) {
            result = "No";
            break;
          }
        }
      }

      System.out.println(result);

    }

  }
  ```
    