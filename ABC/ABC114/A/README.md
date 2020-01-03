### ABC114

# A - 753

  [問題はこちら](https://atcoder.jp/contests/abc114/tasks/abc114_a)


- 発想<br>
  X が 7 か 5 か 3 の場合 YES を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int X;
    cin >> X;

    if (X == 7 || X == 5 || X == 3) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int X = sc.nextInt();

      if ((X == 3) || (X == 5) || (X == 7)) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }
  }
  ```
    