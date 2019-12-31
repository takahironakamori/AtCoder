### ABC063

# B - Varied

  [問題はこちら](https://atcoder.jp/contests/abc063/tasks/abc063_b)


- 発想<br>
  要素数 26 個のアルファベットの数を数えるための配列を用意して、<br>
  値が 2 以上の要素があれば no となる。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    vector<int> count(26);
    for (int i = 0; i < s.size(); i++) {
      count[s[i] - 'a']++;
    }

    string answer = "yes";

    for (int i = 0; i < 26; i++) {
      if (1 < count[i]){
        answer = "no";
        break;
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

      String S = sc.next();

      sc.close();

      // count[0]はaの個数、[1]はbの個数、[25]はzの個数
      int[] count = new int[26];

      for (int i = 0; i < S.length(); i++) {
        count[(int) S.charAt(i) - 97]++;
      }

      String result = "yes";

      for (int i = 0; i < 26; i++) {
        if (2 <= count[i]) {
          result = "no";
          break;
        } 
      }

      System.out.println(result);

    }

  }
  ```
    