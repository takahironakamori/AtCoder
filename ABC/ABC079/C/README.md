### ABC079

# C - Train Ticket

  [問題はこちら](https://atcoder.jp/contests/abc079/tasks/abc079_c)

- 実装のポイント
  
  ＋、−、の組み合わせは、たかが8通りなので全部試せばいい。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int S;
    cin >> S;

    int A = S / 1000;
    S -= (S / 1000) * 1000;
    int B = S / 100;
    S -= (S / 100) * 100;
    int C = S / 10;
    S -= (S / 10) * 10;
    int D = S;

    bool res = false;

    if (((A + B + C + D) == 7) && !(res)) { res = true; cout << A << "+" << B << "+" << C << "+" << D << "=7" << endl; }
    if (((A - B + C + D) == 7) && !(res)) { res = true; cout << A << "-" << B << "+" << C << "+" << D << "=7" << endl; }
    if (((A + B - C + D) == 7) && !(res)) { res = true; cout << A << "+" << B << "-" << C << "+" << D << "=7" << endl; }
    if (((A + B + C - D) == 7) && !(res)) { res = true; cout << A << "+" << B << "+" << C << "-" << D << "=7" << endl; }
    if (((A - B - C + D) == 7) && !(res)) { res = true; cout << A << "-" << B << "-" << C << "+" << D << "=7" << endl; }
    if (((A - B + C - D) == 7) && !(res)) { res = true; cout << A << "-" << B << "+" << C << "-" << D << "=7" << endl; }
    if (((A + B - C - D) == 7) && !(res)) { res = true; cout << A << "+" << B << "-" << C << "-" << D << "=7" << endl; }
    if (((A - B - C - D) == 7) && !(res)) { res = true; cout << A << "-" << B << "-" << C << "-" << D << "=7" << endl; }

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String abcd = sc.next();
      sc.close();

      String[] ABCD = abcd.split("");

      String result = "";

      int[] ans = new int[8];

      ans[0] = Integer.valueOf(ABCD[0]) + Integer.valueOf(ABCD[1]) + Integer.valueOf(ABCD[2]) + Integer.valueOf(ABCD[3]);
      ans[1] = Integer.valueOf(ABCD[0]) + Integer.valueOf(ABCD[1]) + Integer.valueOf(ABCD[2]) - Integer.valueOf(ABCD[3]);
      ans[2] = Integer.valueOf(ABCD[0]) + Integer.valueOf(ABCD[1]) - Integer.valueOf(ABCD[2]) + Integer.valueOf(ABCD[3]);
      ans[3] = Integer.valueOf(ABCD[0]) + Integer.valueOf(ABCD[1]) - Integer.valueOf(ABCD[2]) - Integer.valueOf(ABCD[3]);
      ans[4] = Integer.valueOf(ABCD[0]) - Integer.valueOf(ABCD[1]) - Integer.valueOf(ABCD[2]) - Integer.valueOf(ABCD[3]);
      ans[5] = Integer.valueOf(ABCD[0]) - Integer.valueOf(ABCD[1]) - Integer.valueOf(ABCD[2]) + Integer.valueOf(ABCD[3]);
      ans[6] = Integer.valueOf(ABCD[0]) - Integer.valueOf(ABCD[1]) + Integer.valueOf(ABCD[2]) - Integer.valueOf(ABCD[3]);
      ans[7] = Integer.valueOf(ABCD[0]) - Integer.valueOf(ABCD[1]) + Integer.valueOf(ABCD[2]) + Integer.valueOf(ABCD[3]);

      if (ans[0] == 7) { result = ABCD[0] + "+" + ABCD[1] + "+" + ABCD[2] + "+" + ABCD[3] + "=7"; }
      if (ans[1] == 7) { result = ABCD[0] + "+" + ABCD[1] + "+" + ABCD[2] + "-" + ABCD[3] + "=7"; }
      if (ans[2] == 7) { result = ABCD[0] + "+" + ABCD[1] + "-" + ABCD[2] + "+" + ABCD[3] + "=7"; }
      if (ans[3] == 7) { result = ABCD[0] + "+" + ABCD[1] + "-" + ABCD[2] + "-" + ABCD[3] + "=7"; }
      if (ans[4] == 7) { result = ABCD[0] + "-" + ABCD[1] + "-" + ABCD[2] + "-" + ABCD[3] + "=7"; }
      if (ans[5] == 7) { result = ABCD[0] + "-" + ABCD[1] + "-" + ABCD[2] + "+" + ABCD[3] + "=7"; }
      if (ans[6] == 7) { result = ABCD[0] + "-" + ABCD[1] + "+" + ABCD[2] + "-" + ABCD[3] + "=7"; }
      if (ans[7] == 7) { result = ABCD[0] + "-" + ABCD[1] + "+" + ABCD[2] + "+" + ABCD[3] + "=7"; }

      System.out.println(result);

    }

  }
  ```
    