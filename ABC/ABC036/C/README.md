### ABC036

# C - 座圧

  [問題はこちら](https://atcoder.jp/contests/abc036/tasks/abc036_c)

- 発想
  
  数列 a で使用している数値を把握する。 <br>
  把握したそれぞれの数値の順位（何番目に小さい数値なのか）を調べる。<br>
  a_1から順番に順位を出力する。
  
  連想配列（C++ なら map , Java なら TreeMap は追加時に key を昇順で自動で並べてくれる）を使う。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long N;
    cin >> N;

    vector<int> a(N);

    for (int i = 0; i < N; i++) {
      cin >> a[i];
    }

    map<int, int> m;

    for (int i = 0; i < N; i++) {
      m[a[i]] = 0;
    }

    int j = 0;

    for (auto x: m) {
      m[x.first] = j;
      j++;
    }

    for (int i = 0; i < N; i++){
      cout << m[a[i]] << endl;
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

      int N = Integer.parseInt(sc.next());
      int[] a = new int[N];

      for (int i = 0; i < N; i++) {
        a[i] = Integer.parseInt(sc.next());
      }

      sc.close();

      TreeMap<Integer, Integer> map = new TreeMap<>();

      for (int i = 0; i < N; i++) {
        map.put(a[i],i);
      }

      int count = 0;
      for (Integer key : map.keySet()) {
        map.put(key,count);
        count++;
      }

      PrintWriter out = new PrintWriter(System.out);

      for (int i = 0; i < N; i++) {
        out.println(map.get(a[i]));
      }

      out.flush();

    }

  }
  ```
    