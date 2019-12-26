### ABC115

# A - Christmas Eve Eve Eve

  [問題はこちら](https://atcoder.jp/contests/abc115/tasks/abc115_a)

- 発想<br>
  22、23、24、25 で分岐して表示内容を変える。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int D;
    cin >> D;

    if (D == 22) {
      cout << "Christmas Eve Eve Eve" << endl;
    } else if (D == 23) {
      cout << "Christmas Eve Eve" << endl;
    } else if (D == 24) {
      cout << "Christmas Eve" << endl;
    } else {
      cout << "Christmas" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int D = sc.nextInt();

      if (D == 22) {
        System.out.println("Christmas Eve Eve Eve");
      } else if (D == 23) {
        System.out.println("Christmas Eve Eve");
      } else if (D == 24) {
        System.out.println("Christmas Eve");
      } else {
        System.out.println("Christmas");
      }

    }
  }
  ```
    