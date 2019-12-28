### ABC044

# B - 美しい文字列 / Beautiful Strings

  [問題はこちら](https://atcoder.jp/contests/abc044/tasks/abc044_b)


- 発想<br>
  26 個の要素を持つ配列を用意して、<br>
  w で使われている文字の数を数える。<br>
  文字の数で奇数があれば、No<br>
  すべて偶数ならば、Yes を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string w;
    cin >> w;

    vector<int> count(26);

    for (int i = 0; i < w.size(); i++) {
      count[w[i] - 'a']++;
    }

    string answer = "Yes";

    for (int i = 0; i < 26; i++) {
      if (count[i] % 2 == 1) {
        answer = "No";
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

      String w = sc.next();

      sc.close();

      String[] W = w.split("");

      HashMap<String, Integer> hashMap = new HashMap<>();

      for (int i = 0; i < W.length; i++) {
        if (hashMap.containsKey(W[i])) {
          int v = hashMap.get(W[i]);
          hashMap.put(W[i], v + 1);
        } else {
          hashMap.put(W[i],1);
        }
      }

      boolean valid = true;

      for (int i = 0; i < W.length; i++) {
        int v = hashMap.get(W[i]);
        if (v % 2 != 0) {
          valid = false;
          break;
        }
      }

      if (valid) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }

  }
  ```
    