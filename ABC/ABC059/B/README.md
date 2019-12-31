### ABC059

# B - Comparison

  [問題はこちら](https://atcoder.jp/contests/abc059/tasks/abc059_b)


- 発想<br>
  A と B で文字数が同じ場合は単純に比較する。<br>
  文字数が異なる場合は、少ない方の頭に 0 を加えて文字数を同じして比較する。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string A, B;
    cin >> A >> B;

    if (A.size() < B.size()) {
      string a = "";
      for (int i = 0; i < B.size() - A.size(); i++) {
        a += "0";
      }
      a += A;
      A = a;
    } else if (A.size() != B.size()) {
      string b = "";
      for (int i = 0; i < A.size() - B.size(); i++) {
        b += "0";
      }
      b += B;
      B = b;
    }

    if (B < A) {
      cout << "GREATER" << endl;
    } else if (A == B) {
      cout << "EQUAL" << endl;
    } else {
      cout << "LESS" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String A = sc.next();
      String B = sc.next();

      sc.close();

      String result = "";

      if (A.equals(B)) {
        result = "EQUAL";
      } else {
        if (A.length() < B.length()){
          result = "LESS";
        } else if (B.length() < A.length()) {
          result = "GREATER";
        } else {
          for (int i = 0; i < A.length(); i++) {
            int a = Integer.valueOf(A.substring(i, i+1));
            int b = Integer.valueOf(B.substring(i, i+1));
            if (a < b) {
              result = "LESS";
              break;
            } else {
              result = "GREATER";
              break;
            }
          }
        }
      }

      System.out.println(result);

    }

  }
  ```
    