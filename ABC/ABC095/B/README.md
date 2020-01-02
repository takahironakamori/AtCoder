### ABC095

# B - Bitter Alchemy

  [問題はこちら](https://atcoder.jp/contests/abc095/tasks/abc095_b)


- 発想<br>
  m_1 から m_N までの合計を X から引く。<br>
  引いた残り / 最小の m_i の結果に、N を足したものを出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, X;
    cin >> N >> X;

    int sum = 0;
    vector<int> m(N);

    for (int i = 0; i < N; i++) {
      cin >> m[i];
      sum += m[i];
    }

    sort(m.begin(), m.end());

    X -= sum;

    cout << X / m[0] + N << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int X = sc.nextInt();

      int[] m = new int[N];

      for (int i = 0; i < N; i++) {
        m[i] = sc.nextInt();
      }

      sc.close();

      int count = 0;
      int min = 1001;

      for (int i = 0; i < N; i++) {
        count++;
        min = Math.min(min, m[i]);
        X -= m[i];
      }

      System.out.println(count + X / min);

    }

  }
  ```
    