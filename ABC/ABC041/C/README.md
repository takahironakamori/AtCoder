### ABC041

# C - 背の順

  [問題はこちら](https://atcoder.jp/contests/abc041/tasks/abc041_c)

- 発想<br>
  出席番号、身長を 1 セットにして配列に保持し、身長の高い順に並べ替え、出席番号を出力する。<br>
  
  
- 実装のポイント
  C++の場合、pair を使うが、身長順に並び替えたいので、pair<身長、出席番号>とする。<br>
  降順の並び替えは、rbegin()、rend()を使うと楽。
  Javaの場合、[][]の二次元配列を使う。<br>
  降順の並び替えの実装が少し複雑になる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<pair<int, int>> a(N);
    for (int i = 0; i < N; i++) {
      cin >> a[i].first;
      a[i].second = i + 1;
    }

    sort(a.rbegin(), a.rend());

    for (int i = 0; i < N; i++) {
      cout << a[i].second << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  import java.io.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      Integer[][] a = new Integer[N][2];

      for (int i = 0; i < N; i++) {
        a[i][0] = i;
        a[i][1] = sc.nextInt();
      }

      sc.close();

      Arrays.sort(a, (a1,b1) -> Integer.compare(b1[1],a1[1]));

      PrintWriter out = new PrintWriter(System.out);

      for (int i = 0; i < N; i++) {
        out.println(a[i][0] + 1);
      }

      out.flush();

    }

  }
  ```
    