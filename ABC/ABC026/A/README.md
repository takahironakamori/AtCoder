### ABC026

# A - 掛け算の最大値

  [問題はこちら](https://atcoder.jp/contests/abc026/tasks/abc026_a)


- 発想<br>
  (A / 2) * (A / 2) を出力する。<br>  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A;
    cin >> A;

    cout << (A / 2) * (A / 2) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int A = sc.nextInt();
      int s = A / 2;
      System.out.println(s * s);

    }
  }
  ```
    