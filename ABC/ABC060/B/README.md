### ABC060

# B - Choose Integers

  [問題はこちら](https://atcoder.jp/contests/abc060/tasks/abc060_b)


- 発想<br>
  1 から A までを調べる。<br>
  B * i + C が A で割り切れば YES<br>
  A を超えてもできない場合は NO<br>
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C;
    cin >> A >> B >> C;

    string answer = "NO";

    for (int i = 1; i <= A; i++) {
      int v = B * i + C;
      if (v % A == 0) {
        answer = "YES";
        break;
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

      String result = "NO";

      for (int i = 1; i <= A; i++) {
        int bx = B * i + C;
        if (bx % A == 0) {
          result = "YES";
          break;
        }
      }

      System.out.println(result);

    }

  }
  ```
    