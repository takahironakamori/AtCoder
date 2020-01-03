### ABC117

# B - Polygon

  [問題はこちら](https://atcoder.jp/contests/abc117/tasks/abc117_b)


- 発想<br>
  L の合計から最も長い L を引いたものが 最も長い L より小さい場合は Yes を出力し、<br>
  そうでない場合には、No を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int sum = 0;
    int mx = 0;

    for (int i = 0; i < N; i++) {
      int L;
      cin >> L;
      sum += L;
      mx = max(mx, L);
    }

    if (mx < sum - mx) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
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

      int[] L = new int[N];

      for (int i = 0; i < N; i++) {
        L[i] = sc.nextInt();
      }

      sc.close();

      Arrays.sort(L);

      int sum = 0;

      for (int i = N-2; 0 <= i; i--) {
        sum += L[i];
      }

      if (L[N-1] < sum) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }

  }
  ```
    