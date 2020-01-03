### ABC110

# B - 1 Dimensional World's Tale

  [問題はこちら](https://atcoder.jp/contests/abc110/tasks/abc110_b)


- 発想<br>
  Z を -100 から 100 まで調べてもいいが、X + 1 から Y まで十分。<br>
  x と y については、配列に入れて並び替えて、x の場合は最大値、y の場合は最小値だけ確認すればいい。
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M, X, Y;
    cin >> N >> M >> X >> Y;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
      cin >> x[i];
    }

    sort(x.begin(), x.end(), std::greater<int>());

    vector<int> y(M);
    for (int i = 0; i < M; i++) {
      cin >> y[i];
    }

    sort(y.begin(), y.end());

    string answer = "War";

    for (int i = X + 1; i <= Y; i++) {
      if(x[0] < i && i <= y[0]) {
        answer = "No War";
        break;
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
      int M = sc.nextInt();
      int X = sc.nextInt();
      int Y = sc.nextInt();

      int[] x = new int[N];
      int[] y = new int[M];

      for (int i = 0; i < N; i++) {
        x[i] = sc.nextInt();
      }

      for (int i = 0; i < M; i++) {
        y[i] = sc.nextInt();
      }

      sc.close();

      Arrays.sort(x);

      Arrays.sort(y);

      String result = "War";

      for (int i = -100; i <= 100; i++) {

        if (x[N - 1] < i && i <= y[0] && X < i && i <= Y) {
          result = "No War";
          break;
        }

      }

      System.out.println(result);

    }

  }
  ```
    