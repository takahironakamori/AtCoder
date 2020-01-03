### ABC120

# B - K-th Common Divisor

  [問題はこちら](https://atcoder.jp/contests/abc120/tasks/abc120_b)

- 発想<br>
  1 から 100 まで順番に試す。<br>
  A および B も割り切れる数が見つければ、配列に入れていき、<br>
  大きい方から K 番目を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {

    int A, B, K;
    cin >> A >> B >> K;

    vector<int> answer;

    for (int i = 1; i <= 100; i++) {
      if (A % i == 0 && B % i == 0) {
        answer.push_back(i);
      }
    }

    sort(answer.begin(), answer.end(), std::greater<int>());

    cout << answer[K - 1] << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int A = sc.nextInt();
      int B = sc.nextInt();
      int K = sc.nextInt();

      sc.close();

      int C = A;

      if (A < B) {
        C = B;
      }

      Deque<Integer> deque = new ArrayDeque<>();

      for (int i = 1; i <= C; i++) {
        if ((A % i == 0) && (B % i == 0)) {
          deque.push(i);
        }
      }

      int s = 0;

      for (int i = 0; i < K; i++) {
        s = deque.pollFirst();
      }

      System.out.println(s);

    }

  }
  ```
    