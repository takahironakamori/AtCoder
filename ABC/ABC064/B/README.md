### ABC064

# B - Traveling AtCoDeer Problem

  [問題はこちら](https://atcoder.jp/contests/abc064/tasks/abc064_b)


- 発想<br>
  配列にいれて、並び替えて、最大値 - 最小値 を出力する。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    cout << a[N - 1] - a[0] << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int[] a = new int[N];

      for (int i = 0; i < N; i++) {
        a[i] = sc.nextInt();
      }

      sc.close();

      Arrays.sort(a);

      System.out.println(a[a.length - 1] - a[0]);

    }

  }
  ```
    