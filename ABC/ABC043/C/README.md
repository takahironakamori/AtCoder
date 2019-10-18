### ABC043

# C - いっしょ / Be Together

  [問題はこちら](https://atcoder.jp/contests/abc043/tasks/arc059_a)

- 発想
  
  シミュレーション。
  
  
- 実装のポイント

  文字列操作について<br>
  C++で 文字列.[i] は char 型なので 'A' シングルコーテーションを使って比較する。<br>
  キュー（Deque）を使っても簡単にできる。<br>
  

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

    int answer = 2001000;

    for (int i = -100; i <= 100; i++) {

      int cost = 0;

      for (int j = 0; j < N; j++) {
        cost += pow(abs(i - a[j]),2);
      }

      answer = min(answer, cost);

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
      for (int i = 0; i < N; i++) {
        a[i] = sc.nextInt();
      }

      sc.close();

      int answer = 2001000;

      for (int i = -100; i <= 100; i++) {

        int cost = 0;

        for (int j = 0; j < N; j++) {
          cost += Math.pow(Math.abs(i - a[j]),2);
        }

        answer = Math.min(answer, cost);

      }

      System.out.println(answer);

    }

  }
  ```
    