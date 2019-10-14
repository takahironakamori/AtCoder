### ABC122

# C - GeT AC

  [問題はこちら](https://atcoder.jp/contests/abc122/tasks/abc122_c)

- 発想<br>
  累積和。<br>
  A と C が並んでいれば 1 カウントを加える。<br>
  A と C が並んでいる個数を保持する配列を v とすると、以下のようなイメージになる。<br>
  <br>
  i&nbsp;&nbsp;&nbsp;: 0 1 2 3 4 5 6 7 8<br>
  v[i] : 0 0 1 1 2 2 2 3 3<br>
  S[i] :  A C A C T A C G <br>
  <br>
  最初に文字列を調べて、累積和の配列を作っておく。<br>
  次に、l が 3、r が 7 とすると、v[3] = 1、v[7] = 3 となり、<br>
  v[7](=3) - v[3](=1) = 2 、すなわち、v[r] - v[l] が回答となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    vector<pair<int, int>> p(Q);

    for (int i = 0; i < Q; i++) {
      int a,b;
      cin >> a >> b;
      p[i] = make_pair(a, b);
    }

    vector<int> v(N+1);
    
    v[0] = 0;
    v[1] = 0;

    for (int i = 1; i <= N; i++) {
      if (S[i - 1] == 'A' && S[i] == 'C') {
        v[i + 1] = v[i] + 1;
      } else {
        v[i + 1] = v[i];
      }
    }

    for (int i = 0; i < Q; i++) {
      cout << v[p[i].second] - v[p[i].first] << endl;
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
      int Q = sc.nextInt();
      String S = sc.next();

      int[] l = new int[Q];
      int[] r = new int[Q];

      for (int i = 0; i < Q; i++) {
        l[i] = sc.nextInt();
        r[i] = sc.nextInt();
      }

      sc.close();

      String[] s = S.split("");

      int[] ac = new int[N+1];

      ac[0] = 0;
      ac[1] = 0;

      for (int i = 1; i < N; i++){
        if (s[i-1].equals("A") && s[i].equals("C")) {
          ac[i+1] = ac[i] + 1; 
        } else {
          ac[i+1] = ac[i];
        }
      }

      for (int i = 0; i < Q; i++){
        System.out.println(ac[r[i]] - ac[l[i]]);
      }

    }

  }
  ```
    