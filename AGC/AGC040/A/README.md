### AGC040

# A - ><

  [問題はこちら](https://atcoder.jp/contests/agc040/tasks/agc040_a)

- 発想<br>
  < が何個連続するかを保持する配列 l と、<br>
  > が何個連続するかを保持する配列 r を作って、それぞれ数える。<br>
  i = 0 から順番に、l[i] と r[i] で大きい方を足し合わせていった結果が回答となる。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    vector<int> l(s.size()+1);
    vector<int> r(s.size()+1);

    int count = 0;

    for (int i = 0; i < s.size(); i++) {
      l[i] = count;
      if (s[i] == '<') {
        count++;
      } else {
        count = 0;
      }
    }
    l[s.size()] = count;

    count = 0;

    for (int i = s.size(); 0 <= i; i--) {
      r[i+1] = count;
      if (s[i] == '>') {
        count++;
      } else {
        count = 0;
      }
    }
    r[0] = count;

    long answer = 0;

    for (int i = 0; i <= s.size(); i++) {
      answer += max(l[i], r[i]);
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
      String S = sc.next();
      sc.close();

      String[] s = S.split("");

      int[] l = new int[s.length+1];
      int[] r = new int[s.length+1];

      int count = 0;

      for (int i = 0; i < s.length; i++) {
        l[i] = count;
        if (s[i].equals("<")) {
          count++;
        } else {
          count = 0;
        }
      }
      l[s.length] = count;

      count = 0;

      for (int i = s.length - 1; 0 <= i; i--) {
        r[i+1] = count;
        if (s[i].equals(">")) {
          count++;
        } else {
          count = 0;
        }
      }
      r[0] = count;

      long answer = 0;

      for (int i = 0; i <= s.length; i++) {
        answer += Math.max(l[i], r[i]);
      }

      System.out.println(answer);

    }

  }
  ```
    