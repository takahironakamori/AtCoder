### ABC031

# A - ゲーム

  [問題はこちら](https://atcoder.jp/contests/abc031/tasks/abc031_a)


- 発想<br>
  どちらかに1を足して積が大きい方を出力する。<br>
  または、小さい方に1を足して積を出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, D;
    cin >> A >> D;

    int answer = max((A + 1) * D, A * (D + 1));
    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int A = sc.nextInt();
      int D = sc.nextInt();

      if (A <= D) {
        System.out.println((A + 1) * D);
      } else {
        System.out.println(A * (D + 1));
      }

    }
  }
  ```
    