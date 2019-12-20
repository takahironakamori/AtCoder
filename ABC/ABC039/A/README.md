### ABC039

# A - 高橋直体

  [問題はこちら](https://atcoder.jp/contests/abc039/tasks/abc039_a)

- 発想<br>
  A * B * 2 + B * C * 2 + A * C * 2を計算する<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C;
    cin >> A >> B >> C;

    int answer = 0;

    answer += A * B * 2;
    answer += B * C * 2;
    answer += C * A * 2;

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
    int B = sc.nextInt();
    int C = sc.nextInt();

    System.out.println((A * B * 2) + (B * C * 2) + (A * C * 2));

  }
}
  ```
    