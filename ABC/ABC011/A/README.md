### ABC011

# A - 来月は何月？

  [問題はこちら](https://atcoder.jp/contests/abc011/tasks/abc011_1)


- 発想<br>
  n が 12 の場合は 1 を、それ以外の場合は n + 1 を出力する。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    if (n == 12) {
      cout << 1 << endl;
    } else {
      cout << n + 1 << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      if (N == 12){
        System.out.println(1);
      } else {
        System.out.println(N + 1);
      }
    }
  }
  ```
    