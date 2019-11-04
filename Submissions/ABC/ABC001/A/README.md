### ABC001

# A - 積雪深差

  [問題はこちら](https://atcoder.jp/contests/abc001/tasks/abc001_1)

- 発想<br>
  H1、H2 を取得し、差を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int H1, H2;
    cin >> H1 >> H2;

    cout << H1 - H2 << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int h1 = sc.nextInt();
      int h2 = sc.nextInt();
      System.out.println(h1-h2);
    }
  }
  ```
    