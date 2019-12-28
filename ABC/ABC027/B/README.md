### ABC027

# B - 島と橋

  [問題はこちら](https://atcoder.jp/contests/abc027/tasks/abc027_b)


- 発想<br>
  a の合計が N で割り切れない場合は、不可能なので -1 を出力する。<br>
  a の合計 / N、すなわち a の平均値（average）を求める。<br>
  a_1 が average * 1 でない場合は、橋が必要。<br>
  a_1 + a_2 が average * 2 でない場合は、橋が必要。<br>
  a_1 + a_2 + a_3 が average * 3 でない場合は、橋が必要。<br>
  ... を N まで繰り返すと、必要な橋の数を求めることができる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int sum = 0;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
      cin >> a[i];
      sum += a[i];
    }

    int average = sum / N;
    int current = 0;
    int answer = 0;

    if (sum % N != 0) {
      answer = -1;
    } else {
      for (int i = 0; i < N; i++) {
        current += a[i];
        if ((i + 1) * average != current) {
          answer++;
        }
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
      int[] a = new int[N];
      int sum = 0;

      for (int i = 0; i < N; i++) {
        a[i] = sc.nextInt();
        sum += a[i];
      }

      sc.close();

      if (sum % N != 0) {
        System.out.println(-1);
      } else {

        int count = 0;

        int average = sum / N;

        int current = 0;

        for (int i = 0; i < N; i++) {

          current += a[i];

          if ((i + 1) * average != current) {
            count++;
          }

        }

        System.out.println(count);

      }
    }

  }
  ```
    