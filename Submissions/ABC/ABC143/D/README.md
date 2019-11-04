### ABC143

# D - Triangles

  [問題はこちら](https://atcoder.jp/contests/abc143/tasks/abc143_d)

- 発想<br>
  棒を 3 本選んで条件を満たすかを確認する。<br>

- 実装のポイント<br>
  1本目、2本目の棒は for 文で指定して、3本目については二分探索で条件を満たす棒を見つけると計算量が間に合う。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> L(N);
    for (int i = 0; i < N; i++) {
      cin >> L[i];
    }

    sort(L.begin(), L.end());

    int answer = 0;

    for (int i = 0; i < N; i++) {
      for (int j = i + 1; j < N; j++) {
        int d = L[i] + L[j];
        int r = lower_bound(L.begin(), L.end(), d) - L.begin();
        int l = j + 1;
        answer += max(0, r - l);
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
      int[] L = new int[N];
      for (int i = 0; i < N; i++) {
        L[i] = sc.nextInt();
      }
      sc.close();

      Arrays.sort(L);

      int answer = 0;

      for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
          int d = L[i] + L[j];
          int r = binary_search(L, d);
          int l = j + 1;
          answer += Math.max(0, r - l);
        }
      }

      System.out.println(answer);

    }

    public static int binary_search(int[] v, int x) {

      int l = -1;
      int r = v.length;

      while(r - l > 1) {

        int i = (l + r) / 2;

        if(x <= v[i]) {
          r = i;
        } else {
          l = i;
        }

      }

      return r;

    }

  }
  ```
    