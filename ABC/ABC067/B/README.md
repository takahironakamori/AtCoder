### ABC067

# B - Snake Toy

  [問題はこちら](https://atcoder.jp/contests/abc067/tasks/abc067_b)


- 発想<br>
  l を配列に入れて、並び替えて、大きい順に K 番目までの合計を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    vector<int> l(N);
    for (int i = 0; i < N; i++) {
      cin >> l[i];
    }

    sort(l.begin(), l.end());

    int answer = 0;

    for (int i = N - 1; N - K <= i; i--) {
      answer += l[i];
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
      int K = sc.nextInt();
      Integer[] l = new Integer[N];

      for (int i = 0; i < N; i++) {
        l[i] = sc.nextInt();
      }

      sc.close();

      Arrays.sort(l, Comparator.reverseOrder());

      Integer length = 0;

      for (int i = 0; i < K; i++) {
        length += l[i];
      }

      System.out.println(length);

    }

  }
  ```
    