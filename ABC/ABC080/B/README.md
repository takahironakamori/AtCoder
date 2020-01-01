### ABC080

# B - Harshad Number

  [問題はこちら](https://atcoder.jp/contests/abc080/tasks/abc080_b)


- 発想<br>
  各桁の数値を足したものを作り、N で割り切れるかを確認する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string N;
    cin >> N;

    int N2 = 0;
    int N3 = 0;

    for (int i = 0; i< N.size(); i++) {
      N2 += (N[i] - '0') * pow(10, N.size() - 1 - i);  
      N3 += N[i] - '0';
    }

    if (N2 % N3 == 0) {
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

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();

      sc.close();

      String s = String.valueOf(N);

      String[] S = s.split("");

      int a = 0;

      for (int i = 0; i < S.length; i++) {
        a += Integer.valueOf(S[i]);
      }

      if (N % a == 0) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }

  }
  ```
    