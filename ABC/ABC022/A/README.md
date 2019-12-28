### ABC022

# A - Best Body

  [問題はこちら](https://atcoder.jp/contests/abc022/tasks/abc022_a)


- 発想<br>
  W がベストボディーかどうかを確認する。<br>
  2日目以降 W に A_i を加え、ベストボディーかどうかを確認する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, S, T;
    cin >> N >> S >> T;

    int W;
    cin >> W;

    int answer = 0;

    if (S <= W && W <= T) {
      answer++;
    }

    for (int i = 0; i < N - 1; i++) {

      int A;
      cin >> A;
      W += A;

      if (S <= W && W <= T) {
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
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      int S = sc.nextInt();
      int T = sc.nextInt();
      int W = sc.nextInt();
      Integer arr[] = new Integer[N];
      int count = 0;
      arr[0] = W;

      if ((S <= arr[0]) && (arr[0] <= T)) {
          count++;
        }

      for (int i=1; i<N; i++) {
        arr[i] = sc.nextInt() + arr[i-1];
        if ((S <= arr[i]) && (arr[i] <= T)) {
          count++;
        }
      }

      System.out.println(count);

    }
  }
  ```
    