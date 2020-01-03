### ABC131

# B - Bite Eating

  [問題はこちら](https://atcoder.jp/contests/abc131/tasks/abc131_b)

- 発想<br>
  L 個のりんごの味の合計を計算する。<br>
  L_i の絶対値が最も小さいものを探し、<br>
  合計が正ならば引き、<br>
  合計が負ならは加える。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, L;
    cin >> N >> L;

    int answer = 300;
    int sum = 0;

    for (int i = 1; i <= N; i++) {
      int l = L + i - 1;
      sum += l;
      answer = min(answer, abs(l));
    }

    if (sum < 0) {
      cout << sum + answer << endl;
    } else {
      cout << sum - answer << endl;
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
      int L = sc.nextInt();
      int[] arr = new int[N+1];
      sc.close();

      arr[0] = 0;
      int all = 0;

      for (int i = 1; i < N+1; i++) {
        arr[i] = L + i - 1;
        all += arr[i];
      }

      int d = 200;
      int r = 200;

      for (int i = 1; i < N+1; i++) {
        if (Math.abs(arr[i]) < d){
          d = Math.abs(arr[i]);
          r = arr[i];
        }
      }

      System.out.println(all - r);

    }

  }
  ```
    