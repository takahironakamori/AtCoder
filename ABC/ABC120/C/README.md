### ABC120

# C - Unification

  [問題はこちら](https://atcoder.jp/contests/abc120/tasks/abc120_c)

- 発想
  
  O（赤）と 1（青）の個数を数えて、少ない方を 2 倍した数だけ取り除くことができる。<br>
  O（赤）と 1（青）の個数を数えて、N から O（赤）と 1（青）の差（絶対値）を引いても同じ数になる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < S.length(); i++) {
      if (S[i] == '0') {
        countZero++;
      } else {
        countOne++;
      }
    }

    cout << min(countZero, countOne) * 2 << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String S = sc.next();

      sc.close();

      String[] s = S.split("");

      int red = 0;
      int blue = 0;

      for (int i = 0; i < s.length; i++) {
        if(s[i].equals("0")){
          red++;
        } else {
          blue++;
        }
      }

      System.out.println(s.length - Math.abs(red - blue));

    }

  }
  ```
    