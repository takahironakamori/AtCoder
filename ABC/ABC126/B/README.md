### ABC126

# B - YYMM or MMYY

  [問題はこちら](https://atcoder.jp/contests/abc126/tasks/abc126_b)

- 発想
  
  4文字を前半2文字と後半2文字の数値に分けて、それぞれ1以上12以下か否かを判定する。<br>
  1.前半と後半の両方で1以上12以下を満たす場合はAMBIGUOUSを出力する。<br>
  2.前半だけ1以上12以下を満たす場合はMMYYを出力する。<br>
  3.後半だけ1以上12以下を満たす場合はYYMMを出力する。<br>
  1.から3.をすべて満たさない場合は、NAを出力する。<br>

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int S;
    cin >> S;

    int f = S / 100;
    int b = S % 100;

    if (1 <= f && f <= 12 && 1 <= b && b <= 12) {
      cout << "AMBIGUOUS" << endl;
    } else if (1 <= f && f <= 12) {
      cout << "MMYY" << endl;
    } else if (1 <= b && b <= 12) {
      cout << "YYMM" << endl;
    } else {
      cout << "NA" << endl;
    }

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int S = sc.nextInt();
      sc.close();

      int f = S / 100;
      int r = S % 100;

      if (f <= 12 && r <= 12 && f != 0 && r != 0) {
        System.out.println("AMBIGUOUS");
      } else if (f <= 12 && f != 0) {
        System.out.println("MMYY");
      } else if (r <= 12 && r != 0) {
        System.out.println("YYMM");
      } else {
        System.out.println("NA");
      }
    }

  }
  ```
    