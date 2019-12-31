### ABC052

# B - Increment Decrement

  [問題はこちら](https://atcoder.jp/contests/abc052/tasks/abc052_b)

- 発想<br>
  あらかじめ最大値を保持するための変数を用意しておく。<br>
  S を 1 文字ずつ I ならば x に 1 加えて、 D ならば 1 減らす。<br>
  加減の作業を 1 回行う都度、x が最大値より大きい場合は、最大値を x に更新する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    string S;
    cin >> S;

    int x = 0;
    int answer = 0;

    for (int i = 0; i < N; i++) {
      if (S[i] == 'I') {
        x++;
      } else {
        x--;
      }
      answer = max(answer, x);
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
      String S_ = sc.next();

      sc.close();

      String[] S = S_.split("");

      int x = 0;
      int max = 0;

      for (int i = 0; i < S.length; i++) {
        if (S[i].equals("I")) {
          x++;
          max = Math.max(max, x);
        } else {
          x--;
        }
      }

      System.out.println(max);

    }

  }
  ```
    