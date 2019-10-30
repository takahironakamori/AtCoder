### ABC003

# A - AtCoder社の給料

  [問題はこちら](https://atcoder.jp/contests/abc003/tasks/abc003_1)

- 発想<br>
  文字を1文字ずつ確認していく。<br>
  同じ文字ならOK。<br>
  異なる文字なら、片方が @ で、もう一方が a、t、c、o、d、e、r のどれかあればOK

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    double answer = 0;
    for (int i = 1; i <= N; i++) {
      answer += (double) 10000 * i / N;
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
      int A = 0;
      A = N * (N + 1) / 2;
      System.out.println( A * 10000 / N);
    }
  }
  ```
    