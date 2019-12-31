### ABC051

# B - Sum of Three Integers

  [問題はこちら](https://atcoder.jp/contests/abc051/tasks/abc051_b)


- 発想<br>
  X を 0 から K まで、Y を 0 から K まで順番に調べていくと、<br>
  Z = S - X - Y と決まるので、二重ループでいい。<br>
  あとは、Z が 0 以上で K 以下 である場合の数を数える。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int K, S;
    cin >> K >> S;

    int answer = 0;

    for (int X = 0; X <= K; X++) {
      for (int Y = 0; Y <= K; Y++) {
        int Z = S - Y - X;
        if (Z <= K && 0 <= Z) {
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

      int K = sc.nextInt();
      int S = sc.nextInt();

      sc.close();

      int count = 0;

      for (int i = 0; i <= K; i++) {
        for (int j = 0; j <= K; j++) {
          if ((S - i - j) <= K && 0 <= (S - i - j)) {
            count ++;
          }
        } 
      }

      System.out.println(count);

    }

  }
  ```
    