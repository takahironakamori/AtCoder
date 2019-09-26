### ABC127

# D - Integer Cards

  [問題はこちら](https://atcoder.jp/contests/abc127/tasks/abc127_d)

- 発想
  
  数列 A に C を B 回加える。<br>
  すべての加え終えたら、数列 A を大きい順、 N 個分の合計を計算する。
  
- 実装のポイント
  
  priority_queue を使うと最も大きいものを簡単に得ることができる。<br>
  二次元配列を使う場合は並び替え方法が複雑になる。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    priority_queue<pair<int, int>> v;

    for (int i = 0; i < N; i++) {
      int a;
      cin >> a;
      v.push({a, 1});    
    }

    for (int i = 0; i < M; i++) {
      int a, b;
      cin >> a >> b;
      v.push({b, a});
    }

    long count = 0;

    for (int i = 0; i < N; i++) {

      pair<int, int> p = v.top();
      v.pop();
      count += p.first;

      if (1 < p.second) {
        p.second--;
        v.push(p);
      }

    }

    cout << count << endl;

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
      List<Integer> A = new ArrayList<>();
      int[][] BC = new int[M][2];

      for (int i = 0; i < N; i++) {
        A.add(sc.nextInt());
      }

      for (int i = 0; i < M; i++) {
        BC[i][0] = sc.nextInt();
        BC[i][1] = sc.nextInt();
      }

      sc.close();

      Arrays.sort(BC, (a,b) -> Integer.compare(b[1],a[1]));

      int count = 0;

      roop:for (int i = 0; i < M; i++) {
        for (int j = 0; j < BC[i][0]; j++) {
          A.add(BC[i][1]);
          count++;
          if (N <= count) {
            break roop;
          }
        }  
      }

      Collections.sort(A, Comparator.reverseOrder());

      long max = 0;

      for (int i = 0; i < N; i++) {
        max += A.get(i);
      }

      System.out.println(max);

    }

  }
  ```
    