### ABC083

# A - Libra

  [問題はこちら](https://atcoder.jp/contests/abc083/tasks/abc083_a)

- 発想<br>
  A + B と C + D を比較する。<br>
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (A + B == C + D) {
      cout << "Balanced" << endl;
    } else if (A + B < C + D) {
      cout << "Right" << endl;
    } else {
      cout << "Left" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int A = sc.nextInt();
      int B = sc.nextInt();
      int C = sc.nextInt();
      int D = sc.nextInt();

      if ((A + B) == (C + D)) {
        System.out.println("Balanced");
      } else if ((A + B) < (C + D)) {
        System.out.println("Right");
      } else {
        System.out.println("Left");
      }

    }
  }
  ```
    