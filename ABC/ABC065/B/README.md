### ABC065

# B - Trained?

  [問題はこちら](https://atcoder.jp/contests/abc065/tasks/abc065_b)


- 発想<br>
  どのボタンが光るかを順にシミュレートしていく。<br>
  調べる回数は N 回で十分。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> a(N+1);
    for (int i = 1; i <= N; i++) {
      cin >> a[i];
    }

    bool flg = true;
    int current = 1;
    int answer = 0;

    while (flg) {

      answer++;
      current = a[current];

      if (current == 2) {
        flg = false;
      }

      if (answer == N) {
        answer = -1;
        flg = false;
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
      int[] a = new int[N + 1];

      for (int i = 1; i < N + 1; i++) {
        a[i] = sc.nextInt();
      }

      sc.close();

      int count = 0;

      boolean valid = true;
      int current = 1;

      while (valid) {

        count++;

        current = a[current];

        if (current == 2) {
          valid = false;
        }

        if (count == N) {
          count = 0;
          valid = false;
        }

      }

      if (count == 0) {
        System.out.println(-1);
      } else {
        System.out.println(count);
      }

    }

  }
  ```
    