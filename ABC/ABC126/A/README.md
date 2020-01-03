### ABC126

# A - Changing a Character

  [問題はこちら](https://atcoder.jp/contests/abc126/tasks/abc126_a)


- 発想<br>
  K 文字目を小文字に変えるが、ASCIIコードを利用する方法（C++ のコード）や<br>
  文字を比較する方法（Java のコード）がある。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    S[K - 1] = char(S[K - 1] + 32);

    cout << S << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int K = sc.nextInt();
      String s_ = sc.next();

      sc.close();

      String[] S = s_.split("");

      for (int i = 0; i < S.length; i++) {
        if (i == K - 1) {
          if (S[i].equals("A")) {
            S[i] = "a";
          }
          if (S[i].equals("B")) {
            S[i] = "b";
          }
          if (S[i].equals("C")) {
            S[i] = "c";
          }
        }
      }

      for (int i = 0; i < S.length; i++) {
        System.out.print(S[i]);
      }

      System.out.println("");

    }

  }
  ```
    