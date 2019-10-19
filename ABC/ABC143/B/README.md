### ABC143

# B - TAKOYAKI FESTIVAL 2019

  [問題はこちら](https://atcoder.jp/contests/abc143/tasks/abc143_b)

- 発想<br>
  d_1 から d_N について考えられるすべてのパターンを試す。

- 実装のポイント<br>
  N の上限が 50 なので、計算量も多くない。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> d(N);
    for (int i = 0; i < N; i++) {
      cin >> d[i];
    }

    int answer = 0;

    for (int i = 0; i < N; i++) {
      for (int j = i + 1; j < N; j++) {
        answer += d[i] * d[j];
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

      int [] d = new int[N];
      for(int i = 0; i < N; i++) {
        d[i] = sc.nextInt();
      }

      sc.close();

      int answer = 0;

      for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
          answer += d[i] * d[j];
        }
      }

      System.out.println(answer);

    }

  }
  ```
    