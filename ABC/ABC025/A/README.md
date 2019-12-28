### ABC025

# A - 25個の文字列

  [問題はこちら](https://atcoder.jp/contests/abc025/tasks/abc025_a)


- 発想1（Javaのコード）<br>
  25 通りの文字列を生成して、N番目の文字列を出力する。<br>
  
  
- 発想2（C++のコード）<br>
  1 文字目は、(N - 1) / 5 番目の文字。<br>
  2 文字目は、(N - 1) % 5 番目の文字となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    int N;
    cin >> N;

    string answer = "";
    answer += S[(N - 1) / 5];
    answer += S[(N - 1) % 5];

    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String S = sc.next();
      int N = sc.nextInt();
      String[] sArray = S.split("");

      String[] rArray = new String[25];
      int count = 0;

      for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
          rArray[count] = sArray[i] + sArray[j];
          count++;
        }
      }

      System.out.println(rArray[N-1]);

    }
  }
  ```
    