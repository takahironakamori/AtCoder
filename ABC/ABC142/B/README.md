### ABC142

# B - Roller Coaster

  [問題はこちら](https://atcoder.jp/contests/abc142/tasks/abc142_b)

- 発想

  i 番目の仲間の身長が K cm以上かを順番に調べる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    vector<int> h(N);

    for (int i = 0; i < N; i++) {
      cin >> h[i];
    }

    int count = 0;

    for (int i = 0; i < N; i++) {
      if (K <= h[i]) {
        count++;
      }
    }

    cout << count << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int K = sc.nextInt();

      int[] h = new int[N];

      for (int i = 0; i < N; i++) {
        h[i] = sc.nextInt();
      }

      sc.close();

      int count = 0;

      for (int i = 0; i < N; i++) {
        if (K <= h[i]) {
          count++;
        }
      }

      System.out.println(count);

    }

  }
  ```
    