### ABC014

# A - けんしょう先生のお菓子配り

  [問題はこちら](https://atcoder.jp/contests/abc014/tasks/abc014_1)

- 発想<br>
  a / b の余りが 0 なら 0 を出力する。<br>
  余りがあれば、b - 余りを出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b;
    cin >> a >> b;

    int r = a % b;

    if (r == 0) {
      cout << 0 << endl;
    } else {
      cout << b - r << endl; 
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      int amari = a%b;
      if (amari == 0){
        System.out.println(0);
      } else {
        System.out.println(b - amari);
      }
    }
  }
  ```
    