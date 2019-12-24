### ABC095

# A - Something on It

  [問題はこちら](https://atcoder.jp/contests/abc095/tasks/abc095_a)

- 発想<br>
  700 に o の数だけ 100 を加える。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    int count = 0;

    for (int i = 0; i < 3; i++) {
      if (S[i] == 'o') {
        count++;
      }
    }

    cout << 700 + count * 100 << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String S = sc.next();

      String S1 = S.substring(0,1);
      String S2 = S.substring(1,2);
      String S3 = S.substring(2,3);

      int count = 0;

      if (S1.equals("o")) {
        count++;
      }

      if (S2.equals("o")) {
        count++;
      }

      if (S3.equals("o")) {
        count++;
      }

      System.out.println(700 + (100 * count));

    }
  }
  ```
    