### ABC063

# C - Bugged

  [問題はこちら](https://atcoder.jp/contests/abc063/tasks/arc075_a)

- 発想
  
  すべて正解したと仮定して合計を計算する。<br>
  配点を小さい順に並べる。<br>
  合計が10で割り切れない場合はその合計が答え。<br>
  合計が10で割り切れる場合は、配点が10で割れないもので小さいものを1回引いた結果が答え。<br>
  合計が10で割り切れて、配点がすべて10で割り切れる場合は、0点が答え。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int sum = 0;

    vector<int> S(N);
    for (int i = 0; i < N; i++) {
      cin >> S[i];
      sum += S[i];
    }

    sort(S.begin(), S.end());

    if (sum % 10 == 0) {
      for (int i = 0; i < N; i++) {
        if (S[i] % 10 != 0) {
          sum = sum - S[i];
          break;
        }
      }
      if (sum % 10 == 0) {
        sum = 0;
      }
    }

    cout << sum << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      Integer[] s = new Integer[N];

      int sum = 0;

      for (int i = 0; i < N; i++) {
        s[i] = sc.nextInt();
        sum += s[i];
      }

      sc.close();

      Arrays.sort(s);

      if (sum % 10 == 0) {
        for (int i = 0; i < N; i++) {
          if (s[i] % 10 != 0 ) {
            sum = sum - s[i];
            break;
          }
        }
        if (sum % 10 == 0) {
          sum = 0;
        }
      }

      System.out.println(sum);

    }

  }
  ```
    