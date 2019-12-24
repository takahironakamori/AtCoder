### ABC061

# A - Between Two Integers

  [問題はこちら](https://atcoder.jp/contests/abc061/tasks/abc061_a)

- 発想<br>
  A と C 、B と C を比較する<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C;
    cin >> A >> B >> C;

    if (A <= C && C <= B) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
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

      if ((A <= C) && (B >= C)) {
        System.out.println("Yes");  
      } else {
        System.out.println("No");
      }

    }
  }
  ```
    