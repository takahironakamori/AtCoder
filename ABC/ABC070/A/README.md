### ABC070

# A - Palindromic Number

  [問題はこちら](https://atcoder.jp/contests/abc070/tasks/abc070_a)

- 発想<br>
  1 桁目と 3 桁目が同じであれば Yes だが、<br>
  数値として取り出してもいい（C++のコード）し、文字列として取り出してもいい（Javaのコード）。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    if (N / 100 == N % 10) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String N = sc.next();
      String Ns = N.substring(0,1);
      String Ne = N.substring(N.length() - 1);

      if (Ns.equals(Ne)) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }
  }
  ```
    