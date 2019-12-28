### ABC030

# A - 勝率計算

  [問題はこちら](https://atcoder.jp/contests/abc030/tasks/abc030_a)


- 発想<br>
  それぞれの勝率を計算して、比較する。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (((double) B / A) == ((double) D / C)) {
      cout << "DRAW" << endl;
    } else if (((double) B / A) < ((double) D / C)) {
      cout << "AOKI" << endl;
    } else {
      cout << "TAKAHASHI" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      double A = sc.nextInt();
      double B = sc.nextInt();
      double C = sc.nextInt();
      double D = sc.nextInt();

      double a = B/A;
      double b = D/C;

      if (a == b) {
        System.out.println("DRAW");
      } else if(a < b) {
        System.out.println("AOKI");
      } else {
        System.out.println("TAKAHASHI");
      }

    }
  }
  ```
    