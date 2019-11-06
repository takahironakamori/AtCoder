### ABC068

# C - Cat Snuke and a Voyage

  [問題はこちら](https://atcoder.jp/contests/abc068/tasks/arc079_a)

- 発想<br>
  a_i が 1 の場合の b_i と b_j が N の場合の a_j の値が同じ場合があれば、島 N に行くことができる。<br>
  
- 実装のポイント<br>
  a_i が 1　の場合の b_i を保持する配列を持つが、キーを b_i、値は bool、長さ N の配列（コードではstart）を作る。<br>
  b_i が N　の場合の a_i を保持する配列を持つが、キーを a_i、値は bool、長さ N の配列(コードではgoal) を作る。<br>
  start[i] && goal[i] を満たしたら、POSSIBLE を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    // a_iが1のとき、start[b_i]はtrue
    vector<bool> start(N+1);
    
    // b_iがNのとき、goal[a_1]はtrue
    vector<bool> goal(N+1);

    for (int i = 0; i < M; i++) {
      int a;
      int b;
      cin >> a >> b;
      if (a == 1) {
        start[b] = true;
      }
      if (b == N) {
        goal[a] = true;
      }
    }

    string result = "IMPOSSIBLE";

    for (int i = 0; i < N+1; i++) {
      if (start[i] && goal[i]) {
        result = "POSSIBLE";
        break;
      }
    }

    cout << result << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int M = sc.nextInt();

      // a_iが1のとき、start[b_i]はtrue
      boolean[] start = new boolean[N+1];

      // b_iがNのとき、goal[a_1]はtrue
      boolean[] goal = new boolean[N+1];

      for (int i = 0; i < M; i++) {
        int a_ = sc.nextInt();
        int b_ = sc.nextInt();
        if (a_ == 1) {
          start[b_] = true;
        }
        if (b_ == N) {
          goal[a_] = true;
        }
      }

      sc.close();

      String result = "IMPOSSIBLE";

      for (int i = 0; i < N; i++) {
        if (start[i] && goal[i]) {
          result = "POSSIBLE";
          break;
        }
      }

      System.out.println(result);

    }

  }
  ```
    