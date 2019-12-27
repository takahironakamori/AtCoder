### ABC136

# A - Transfer

  [問題はこちら](https://atcoder.jp/contests/abc136/tasks/abc136_a)


- 発想<br>
  C - (A - B) と 0 の大きい方を出力する。<br>
  


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C;
    cin >> A >> B >> C;

    cout << max(C - (A - B), 0) << endl;

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
    