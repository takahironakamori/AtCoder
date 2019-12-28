### ABC033

# B - 町の合併

  [問題はこちら](https://atcoder.jp/contests/abc033/tasks/abc033_b)


- 発想<br>
  過半数を超える町がある場合は、その名称を出力する。<br>
  ない場合は、atcoder を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<pair<string, int>> town(N);

    int sum = 0;

    for (int i = 0; i < N; i++) {
      cin >> town[i].first >> town[i].second;
      sum += town[i].second;
    }

    string answer = "atcoder";

    for (int i = 0; i < N; i++) {
      if (sum / 2 < town[i].second) {
        answer = town[i].first;
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

      String[] S = new String[N];
      int[] P = new int[N];

      int sum = 0;

      for (int i = 0; i < N; i++) {
        S[i] = sc.next();
        P[i] = sc.nextInt();
        sum += P[i];
      }

      sc.close();

      String name = "atcoder";

      int max = 0;

      for (int i = 0; i < N; i++) {
        if (sum / 2 < P[i]) {
          if (max < P[i]) {
            name = S[i];
            max = P[i];
          }
        }
      }

      System.out.println(name);

    }

  }
  ```
    