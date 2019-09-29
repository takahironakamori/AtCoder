### ABC042

# C - こだわり者いろはちゃん / Iroha's Obsession

  [問題はこちら](https://atcoder.jp/contests/abc042/tasks/arc058_a)

- 発想
  
  N から順番に嫌いな文字が含まれていないかを確認する。
  
  
- 実装のポイント

  文字列に変換して検索する方法でいけるが、<br>
  C++の場合は 文字列.find(対象文字列) で検索ができ、無い場合は std::string::npos を返す<br>
  Javaの場合は 文字列.indexOf(対象文字列) で検索ができ、無い場合は -1 を返す<br>
  と、言語で特長がある。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    vector<string> D(K);
    for (int i = 0; i < K; i++) {
      cin >> D[i];
    }

    for (int i = N; i < 100000; i++) {

      string s = to_string(i);

      bool res = true;

      for (int j = 0; j < K; j++) {
        if (s.find(D[j]) != std::string::npos) {
          res = false;
          break;
        }
      }

      if (res) {
        cout << i << endl;
        break;
      }

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
      int K = sc.nextInt();
      String[] D = new String[K];

      for (int i = 0; i < K; i++) {
        D[i] = sc.next();
      }

      sc.close();

      for (int i = N; i < 100000; i++) {

        String s = String.valueOf(i);

        boolean result = true;

        for (int j = 0; j < K; j++) {
          if (0 <= s.indexOf(D[j])) {
            result = false;
            break;
          }
        }

        if (result) {
          System.out.println(i);
          break;
        }

      }

    }

  }
  ```
    