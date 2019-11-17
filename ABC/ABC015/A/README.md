### ABC015

# A - 高橋くんの研修

  [問題はこちら](https://atcoder.jp/contests/abc015/tasks/abc015_1)

- 発想<br>
　A と B の文字列の長さを比べて長い方を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string A, B;
    cin >> A >> B;

    if (A.size() < B.size()) {
      cout << B << endl;
    } else {
      cout << A << endl;
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
      if(A.length() < B.length()){
        System.out.println(B);
      } else {
        System.out.println(A);
      }
    }
  }
  ```
    