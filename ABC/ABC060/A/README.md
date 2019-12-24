### ABC060

# A - Shiritori

  [問題はこちら](https://atcoder.jp/contests/abc060/tasks/abc060_a)

- 発想<br>
  A の最後の文字と B の最初の文字が同じ、かつ、<br>
  B の最後の文字と C の最初の文字が同じなら YES を出力する
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string A, B, C;
    cin >> A >> B >> C;

    if (A[A.size() - 1] == B[0] && B[B.size() - 1] == C[0]) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String A = sc.next();
      String B = sc.next();
      String C = sc.next();

      String Ae = A.substring(A.length() - 1);
      String Bs = B.substring(0,1);
      String Be = B.substring(B.length() - 1);
      String Cs = C.substring(0,1);

      if ((Ae.equals(Bs)) && (Be.equals(Cs))) { 
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }
  }
  ```
    