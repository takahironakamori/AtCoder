### ABC136

# B - Uneven Numbers

  [問題はこちら](https://atcoder.jp/contests/abc136/tasks/abc136_b)


- 発想<br>
  1 から 100000 まで順番に桁数が奇数の場合だけ数えていく。<br>
  


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int answer = 0;

    for (int i = 1; i <= N; i++) {
      if (i <= 9) {
        answer++;
      } else if (100 <= i && i <= 999) {
        answer++;
      } else if (10000 <= i && i <= 99999) {
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

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int A = sc.nextInt();
      int B = sc.nextInt();
      int C = sc.nextInt();

      sc.close();

      int a = A - B;

      int ans = 0;

      if (0 < C-a){
        ans = C - a;
      }

      System.out.println(ans);

    }

  }
  ```
    