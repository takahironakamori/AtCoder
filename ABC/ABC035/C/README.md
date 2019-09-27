### ABC035

# C - オセロ

  [問題はこちら](https://atcoder.jp/contests/abc035/tasks/abc035_c)

- 発想
  
  毎回すべての駒の動きを、シミュレーションすると計算量が多すぎて満点にならない。<br>
  効率的な方法で解く必要がある。
  
  
- 実装のポイント

  いもす法を使う。<br>
  array[0] を使う場合は、<br>
  array[(l_i)-1] に1加える。<br>
  array[r_i] に1引く。
  
  Q 回終わったら、array[i] += array[i-1] で累積和を求め、<br>
  2で割り切れる場合は0<br>
  2で割り切れない場合は1を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, Q;
    cin >> N >> Q;

    vector<int> array(N + 1);

    for (int i = 0; i < Q; i++) {
      int l, r;
      cin >> l >> r;
      array[l-1]++;
      array[r]--;
    }

    for (int i = 1; i < N; i++) {
      array[i] += array[i - 1];
    }

    for (int i = 0; i < N; i++) {
      if (array[i] % 2 == 0) {
        cout << '0';
      } else {
        cout << '1';
      }
    }

    cout << endl;

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
      int Q = Integer.parseInt(sc.next());
      int[] arr = new int[N + 1];

      for (int i = 0; i < Q; i++) {
        int l = Integer.parseInt(sc.next());
        int r = Integer.parseInt(sc.next());
        arr[l - 1]++;
        arr[r]--;
      }

      sc.close();

      for (int i = 1; i < N; i++) {
        arr[i] += arr[i - 1];
      }

      PrintWriter out = new PrintWriter(System.out);

      for (int i = 0; i < N; i++) {
        out.print(arr[i] % 2);
      }

      out.println("");

      out.flush();

    }

  }
  ```
    