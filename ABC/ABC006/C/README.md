### ABC006

# C - スフィンクスのなぞなぞ

  [問題はこちら](https://atcoder.jp/contests/abc006/tasks/abc006_3)

- 発想
  
  N * 2 が M より大きい場合、N * 4 が M より小さい場合は組み合わせは作れない。<br>
  N * 3 が M より大きい場合、(N * 3 - M)だけ、人間が必要。M - 人間の数だけ老人の数になり、赤ちゃんは 0 でいい。<br>
  N * 3 が M より小さい場合、(M - N * 3)だけ、赤ちゃんが必要。M - 赤ちゃんの数だけ老人の数になり、人間は 0 でいい。<br>

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    if (N * 4 < M || M < N * 2) {
      cout << "-1 -1 -1" << endl;
    } else {
      if (N * 3 == M) {
        cout << "0 " << M / 3 << " 0" << endl;
      } else if (N * 3 < M) {
        int r = M - N * 3;
        cout << "0 " << N - r << " " << r << endl;
      } else {
        int r = N * 3 - M;
        cout << r << " " << N - r << " 0" << endl;
      }
    }

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

      sc.close();

      if (M < (N * 2) || (N * 4) < M) {
        System.out.println("-1 -1 -1");
      } else {
        if ((N * 3) <= M) {
          System.out.println("0" + " " + (4 * N - M) + " " + (M - 3 * N));
        } else {
          System.out.println((3 * N - M) + " " + (M - 2 * N) + " " + "0");
        }
      }
    }

  }
  ```
    