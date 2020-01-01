### ABC089

# B - Hina Arare

  [問題はこちら](https://atcoder.jp/contests/abc089/tasks/abc089_b)


- 発想<br>
  S_1 から S_N を set に入れて、size が 3 であれば Three を出力する。<br>
  それ以外の場合は、Four を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    set<string> S;

    for (int i = 0; i < N; i++) {
      string S_;
      cin >> S_;
      S.insert(S_);
    }

    if (S.size() == 3) {
      cout << "Three" << endl;
    } else {
      cout << "Four" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();

      String[] S = new String[N];

      for (int i = 0; i < N; i++) {
        S[i] = sc.next();
      }

      sc.close();

      String result = "Three";

      for (int i = 0; i < N; i++) {
        if (S[i].equals("Y")) {
          result = "Four";
        }
      }

      System.out.println(result);

    }

  }
  ```
    