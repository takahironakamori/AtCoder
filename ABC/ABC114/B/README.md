### ABC114

# B - 754

  [問題はこちら](https://atcoder.jp/contests/abc114/tasks/abc114_b)

- 発想<br>
  文字列 S について、1文字から3文字目まで、2文字目から4文字目まで、3文字目から5文字目まで...と3文字を順番に取り出し、753との絶対値を求め最小値を探す。
  
- 実装のポイント<br>
  最小値を求めるための初期値は1000くらいでいい。<br>
  文字列を数値に変化する方法が言語によって特徴がある。
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    int ans = 1000;

    for (int i = 0; i < S.size() - 2; i++) {
      int a_ = (S[i] - '0') * 100 + (S[i+1] - '0') * 10 + (S[i+2] - '0');
      ans = min(ans, abs(a_ - 753));
    }

    cout << ans << endl;

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

      int d = 753;

      for (int i = 0; i <= s.length - 3; i++) {

        int v = Integer.valueOf(s[i] + s[i+1] + s[i+2]);

        int d1 = Math.abs(753 - v);

        d = Math.min(d, d1);

      }

      System.out.println(d);

    }

  }
  ```
    