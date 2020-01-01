### ABC073

# B - Theater

  [問題はこちら](https://atcoder.jp/contests/abc073/tasks/abc073_b)


- 発想<br>
  r - l + 1 を N 回分足し合わせる。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int sum = 0;

    for (int i = 0; i < N; i++) {
      int l, r;
      cin >> l >> r;
      sum += r - l + 1;
    }

    cout << sum << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();

      int[] l = new int[N];
      int[] r = new int[N];

      for (int i = 0; i < N; i++) {
        l[i] = sc.nextInt();
        r[i] = sc.nextInt();
      }

      sc.close();

      int count = 0;

      for (int i = 0; i < N; i++) {
        count += r[i] - l[i] + 1;
      }

      System.out.println(count);

    }

  }
  ```
    