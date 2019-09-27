### ABC090

# B - Palindromic Numbers

  [問題はこちら](https://atcoder.jp/contests/abc090/tasks/abc090_b)

- 発想
  
  A 以上 B 以下の数値の数が少ないので、全ての数値を順番に確認する。<br>
  5桁の数値を文字列に変換して、1文字目と5文字目が同じ、かつ2文字目と4文字目が同じであれば回文となる。<br>
  1文字目と5文字目、2文字目と4文字目が比較できれば文字列でも数値でもどちらでもいい。<br>
  C++ は s[i] でi-1番目の文字列を取得することができて便利。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    int count = 0;

    for (int i = A; i <= B; i++) {
      string s = to_string(i);
      if (s[0] == s[4] && s[1] == s[3]) {
        count++;
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

      int A = sc.nextInt();
      int B = sc.nextInt();

      sc.close();

      int count = 0;

      for (int i = A; i <= B; i++) {

        String i_ = String.valueOf(i);
        String[] I = i_.split("");

        if (I[0].equals(I[4]) && I[1].equals(I[3])) {
          count++;
        }

      }

      System.out.println(count);

    }

  }
  ```
    