### ABC035

# B - ドローン

  [問題はこちら](https://atcoder.jp/contests/abc035/tasks/abc035_b)

- 発想<br>
  L,R,U,D,? の個数を数える。<br>
  L,R,U,D の個数で ? を無視した位置がわかる。<br>
  （L,R,U,D の個数ではなく、x,yの位置を直接シミュレーションしてもいい。）<br>
  最大値は、無視した位置から ? の個数分遠ざかった距離となる。<br>
  したがって、最大値は、無視した位置のマンハッタン距離に ? の個数を加えたものとなる。<br>
  また、最小値は、無視した位置のマンハッタン距離と ? の個数の大小関係で決まる。<br>
  ? < 無視した位置のマンハッタン距離の場合、最小値は、マンハッタン距離 - ? の個数となり、<br>
  ? > 無視した位置のマンハッタン距離の場合、最小値は、? の個数からマンハッタン距離引いた数を 2 で割った余りとなり、<br>
  ? == 無視した位置のマンハッタン距離の場合、最小値は、0 となるが、上記 2 つの分岐のどちらに入れても結果は同じ。
  
- 実装のポイント<br>
  L,R,U,D,? の個数を数える方法は、while、forのどちらでもいい。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    int T;
    cin >> T;

    vector<int> v(5);
    for (int i = 0; i < S.size(); i++) {

      switch(S[i]) {
        case 'L':
          v[0]++;
          break;
        case 'R':
          v[1]++;
          break;
        case 'U':
          v[2]++;
          break;
        case 'D':
          v[3]++;
          break;
        case '?':
          v[4]++;
          break;
      }

    }

    int x = v[1] - v[0];
    int y = v[2] - v[3];

    int answer;
    if (T == 1) {  
      answer = abs(x) + abs(y) + v[4];
    } else {
      int c = abs(x) + abs(y);
      if (v[4] < c) {
        answer = c - v[4];
      } else {
        answer = (v[4] - c) % 2;
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

      String s = sc.next();
      int T = sc.nextInt();

      sc.close();

      String[] S = s.split("");
      int x = 0;
      int y = 0;
      int q = 0;

      for (int i = 0; i < S.length; i++) {
        if (S[i].equals("L")) {
          x--;
        } else if (S[i].equals("R")) {
          x++;
        } else if (S[i].equals("U")) {
          y++;
        } else if (S[i].equals("D")) {
          y--;
        } else if (S[i].equals("?")) {
          q++;
        }
      }

      if (T == 1) {
        System.out.println(Math.abs(x) + Math.abs(y) + q);
      } else {
        int a = Math.abs(x) + Math.abs(y);
        if (q <= a) {
          System.out.println(a - q);
        } else {
          System.out.println((q - a) % 2);
        }

      }

    }

  }
  ```
    