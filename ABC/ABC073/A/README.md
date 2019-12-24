### ABC073

# A - September 9

  [問題はこちら](https://atcoder.jp/contests/abc073/tasks/abc073_a)


- 発想<br>
  2 桁目と 1 桁目を取り出す必要があるが、計算で取り出す（C++のコード）か、<br>
  文字列として取り出す（Javaのコード）方法がある。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    if (N / 10 == 9 || N % 10 == 9) {
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

      if (Ns.equals("9") || Ne.equals("9")) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }
  }
  ```
    