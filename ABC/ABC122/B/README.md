### ABC122

# B - ATCoder

  [問題はこちら](https://atcoder.jp/contests/abc122/tasks/abc122_b)


- 発想<br>
  A か C か G か T が連続する回数を数える。<br>
  A か C か G か T 以外の文字の場合は、回数を 0 にリセットする。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    vector<int> count(S.size());

    int answer = 0;

    for (int i = 0; i < S.size(); i++) {
      if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T'){
        if (i == 0) {
          count[i] = 1;
        } else {
          count[i] = count[i-1] + 1;
        }
        answer = max(answer, count[i]);
      } else {
        count[i] = 0;
      }
    }

    cout << answer << endl;

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

      String result = "";

      int max = 0;

      for (int i = 0; i < S.length; i++) {
        if (S[i].equals("A") || S[i].equals("C") || S[i].equals("G") || S[i].equals("T")) {
          result += S[i];
          max = Math.max(max, result.length());
        } else {
          result = "";
        }
      }

      System.out.println(max);

    }

  }
  ```
    