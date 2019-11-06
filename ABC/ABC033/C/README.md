### ABC033

# C - 数式の書き換え

  [問題はこちら](https://atcoder.jp/contests/abc033/tasks/abc033_c)

- 発想<br>
  掛け算の中に0がある（true）か否（false）かを覚えておくようにする。<br>
  次の文字が + で、掛け算の中に 0 がなくて、その文字が 0 じゃない場合は 0 にする。<br>
  最後の文字は 0 じゃない場合は 0 にする。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    int count = 0;

    bool has0 = false;

    for (int i = 0; i < S.size(); i++) {

      if (i == S.size() - 1) {
        if ((S[i] != '0') && has0 == false) {
          count++;
        }
      } else {
        if (S[i+1] == '+') {
          if ((S[i] != '0') && has0 == false) {
            count++;
          }
          has0 = false;
        } else {
          if (S[i] == '0') {
            has0 = true;
          }
        }
      }

    }

    cout << count << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String s_ = sc.next();

      sc.close();

      String[] S = s_.split("");

      int count = 0;

      boolean has0 = false;

      for (int i = 0; i < S.length; i++) {

        if (i == S.length -1) {
          if (!(S[i].equals("0")) && has0 == false) {
            count++;
          }
        } else {
          if (S[i+1].equals("+")) {
            if (!(S[i].equals("0")) && has0 == false) {
              count++;
            }
            has0 = false;
          } else {
            if (S[i].equals("0")) {
              has0 = true;
            }
          }
        }

      }

    System.out.println(count);

    }

  }
  ```
    