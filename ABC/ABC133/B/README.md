### ABC133

# B - Good Distance

  [問題はこちら](https://atcoder.jp/contests/abc133/tasks/abc133_b)


- 発想<br>
  問題文の通り距離を計算する。<br>
  求めた平方根を切り捨て、その値を 2 乗して元の数に戻らない場合は、<br>
  求めた平方根は整数ではない。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, D;
    cin >> N >> D;

    vector<vector<int>> X(N,vector<int>(D));

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < D; j++) {
        cin >> X[i][j];
      }
    }

    int answer = 0;

    for (int i = 0; i < N; i++) {
      for (int j = i + 1; j < N; j++) {
        vector<int> y = X[i];
        vector<int> z = X[j];
        int d = 0;
        for (int k = 0; k < D; k++) {
          d += abs(y[k] - z[k]) * abs(y[k] - z[k]);
        }
        double s = (double) sqrt(d);
        if (floor(s) * floor(s) == d) {
          answer++;
        }
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
      int D = sc.nextInt();
      int[][] X = new int[N][D];
      for (int i = 0; i < N; i++) {
        for (int j = 0; j < D; j++) {
          X[i][j] = sc.nextInt();
        }
      }
      sc.close();

      int count = 0;
      double distance = 0.0;

      for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++){
          if (i != j){
            distance = 0.0;
            for (int k = 0; k < D; k++) {
              distance += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
            }
            if (Math.sqrt(distance) % 1 == 0){
              count++;
            }
          }
        }
      }

      System.out.println(count);

    }

  }
  ```
    