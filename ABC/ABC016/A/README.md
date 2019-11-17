### ABC016

# A - 12月6日

  [問題はこちら](https://atcoder.jp/contests/abc016/tasks/abc016_1)

- 発想<br>
  M を D で割って余りが 0 の場合は YES を、それ以外は NO を出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int M, D;
    cin >> M >> D;

    if (M % D == 0) {
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
      int M = sc.nextInt();
      int D = sc.nextInt();
      if(M%D == 0){
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }
    }
  }
  ```
    