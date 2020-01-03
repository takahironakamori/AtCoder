### ABC128

# B - Guidebook

  [問題はこちら](https://atcoder.jp/contests/abc128/tasks/abc128_b)


- 発想<br>
  100 - P_i の結果を 3 桁の文字列で取得する。（例:030）<br>
  S_i と文字列としてつなげる。（例:kazan050）<br>
  二次元配列に上記で作った文字列と、取得した順番を入れる。<br>
  文字列で並び替えて、並び替えた順に、取得した順番を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<pair<string, int>> SP(N);
    for (int i = 0; i < N; i++) {
      string S;
      cin >> S;
      int P;
      cin >> P;
      P = 100 - P;
      if (P < 10) {
        SP[i].first = S + "00" + to_string(P);
      } else if(P < 100) {
        SP[i].first = S + "0" + to_string(P);
      } else {
        SP[i].first = S + to_string(P);
      }
      SP[i].second = i + 1;
    }

    sort(SP.begin(), SP.end());

    for (int i = 0; i < N; i++) {
      cout << SP[i].second << endl;
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
      String[] s = new String[N];

      for (int i = 0; i < N; i++) {
        String s_ = sc.next();
        int n_ = sc.nextInt();
        int distance = 100 - n_;
        s_ = s_ + "/" + String.format("%03d", distance) + "/" + String.format("%03d", i);
        s[i] = s_;
      }

      sc.close();

      Arrays.sort(s);

      for (int i = 0; i < N; i++) {
        String[] r = s[i].split("/");
        System.out.println(Integer.valueOf(r[2]) + 1);
      }

    }

  }
  ```
    