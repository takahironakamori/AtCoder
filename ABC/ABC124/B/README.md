### ABC124

# B - Great Ocean View

  [問題はこちら](https://atcoder.jp/contests/abc124/tasks/abc124_b)


- 発想<br>
  配列に入れて、i について、i - 1 まで条件を満たすかを調べる。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
      cin >> H[i];
    }

    int answer = 1;

    for (int i = 1; i < N; i++) {
      bool flg = true;
      for (int j = 0; j < i; j++) {
        if (H[i] < H[j]) {
          flg = false;
          break;
        }
      }
      if (flg) {
        answer++;
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
      int[] H = new int[N];

      for (int i = 0; i < N; i++) {
        H[i] = sc.nextInt();
      }

      sc.close();

      int count = 0;

      int max = 0;

      for (int i = 0; i < N; i++) {
        if (max <= H[i]) {
          max = H[i];
          count++;
        }
      }

      System.out.println(count);

    }

  }
  ```
    