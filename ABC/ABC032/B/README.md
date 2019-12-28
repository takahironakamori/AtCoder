### ABC032

# B - 高橋君とパスワード

  [問題はこちら](https://atcoder.jp/contests/abc032/tasks/abc032_b)


- 発想<br>
  set に部分文字列を入れていき、set の sizeを出力する。<br>
  k が s の文字数より多い場合は部分文字列が作れないので、0 を出力する。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    int k;
    cin >> k;

    if (k <= s.size()) {

      set<string> st;

      for (int i = 0; i <= s.size() - k; i++) {
        string s_ = s.substr(i, k);
        st.insert(s_);
      }

      cout << st.size() << endl;

    } else {
      cout << 0 << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String s = sc.next();
      int k = sc.nextInt();

      sc.close();

      Set<String> hashSet = new HashSet<String>();

      if (k <= s.length()) {
        for (int i = 0; i < s.length() - k + 1; i++) {
          String s_ = s.substring(i, k + i);
          hashSet.add(s_);
        }
      }

      System.out.println(hashSet.size());

    }

  }
  ```
    