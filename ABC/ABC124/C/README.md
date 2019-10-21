### ABC124

# C - Coloring Colorfully

  [問題はこちら](https://atcoder.jp/contests/abc124/tasks/abc124_c)

- 発想<br>
  パターンは、白黒白黒...と黒白黒白...の2パターンしかないから、それぞれで変更するタイルの数を数えて少ない方が回答となる。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    // 0101...にした場合
    int count1 = 0;

    // 1010...にした場合
    int count2 = 0;

    for (int i = 0; i < S.size(); i++) {
      if (i % 2 == 0) {
        if (S[i] == '1') {
          count1++;
        } else {
          count2++;
        }
      } else { 
        if (S[i] == '0') {
          count1++;
        } else {
          count2++;
        }
      }
    }

    cout << min(count1, count2) << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      String s = sc.next();
      sc.close();

      String[] S = s.split("");

      // 0101...にした場合
      int count1 = 0;

      // 1010...にした場合
      int count2 = 0;

      for (int i = 0; i < S.length; i++) {
        if (i % 2 == 0) {
          if (S[i].equals("1")) {
            count1++;
          } else {
            count2++;
          }
        } else { 
          if (S[i].equals("0")) {
            count1++;
          } else {
            count2++;
          }
        }
      }

      System.out.println(Math.min(count1, count2));

    }

  }
  ```
    