### ABC085

# A - Already 2018

  [問題はこちら](https://atcoder.jp/contests/abc085/tasks/abc085_a)

- 発想<br>
  4 文字目の 7 を 8 に置き換えて出力する。<br>
 

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    S[3] = '8';

    cout << S << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String S = sc.next();

      System.out.println(S.replace("2017/01", "2018/01"));

    }
  }
  ```
    