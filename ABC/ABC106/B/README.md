### ABC106

# B - 105

  [問題はこちら](https://atcoder.jp/contests/abc106/tasks/abc106_b)


- 発想<br>
  1 から N まで奇数の場合は、順番に約数の数を数えて 8 個の場合は、<br>
  カウントを 1 増やす。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  vector<int> divisor(int N) {
    vector<int> res;
    for (int i = 1; i * i <= N; i++) {
      if (N % i == 0) {
        res.push_back(i);
        if (i != N / i) {
          res.push_back(N / i);
        }
      }
    }
    return res;
  }

  int main() {

    int N;
    cin >> N;  

    int answer = 0;

    vector<int> res;

    for (int i = 1; i <= N; i++) {
      if (i % 2 == 1) {
        res = divisor(i);
        if (res.size() == 8) {
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

      sc.close();

      int count = 0;

      for (int i = 105; i <= N; i++) {

        int count_ = 0;

        if (i % 2 == 1) { 

          for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
              count_++;
            }
          }

        }

        if (count_ == 8) {
          count++;
        }

      }

      System.out.println(count);

    }

  }
  ```
    