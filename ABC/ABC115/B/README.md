### ABC115

# B - Christmas Eve Eve

  [問題はこちら](https://atcoder.jp/contests/abc115/tasks/abc115_b)


- 発想<br>
  p の合計を計算して、最大の p / 2 を引く。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int answer = 0;
    int mx = 0;

    for (int i = 0; i < N; i++) {
      int p;
      cin >> p;
      answer += p;
      mx = max(mx, p);
    }

    cout << answer - (mx / 2) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();

      int[] p = new int[N];

      for (int i = 0; i < N; i++) {
        p[i] = sc.nextInt();
      }

      sc.close();

      Arrays.sort(p);

      int sum = 0;

      for (int i = 0; i < N; i++) {

        if (i == N-1) {
          sum += p[i] / 2;
        } else {
          sum += p[i];
        }

      }

      System.out.println(sum);

    }

  }
  ```
    