### ABC069

# A - K-City

  [問題はこちら](https://atcoder.jp/contests/abc069/tasks/abc069_a)

- 発想<br>
  (n - 1) * (m - 1) を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    cout << (n - 1) * (m - 1) << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int m = sc.nextInt();

      int area = 0;

      if (n == m) {
        area = (n - 1) * (n - 1);
      } else if (n < m){
        area = ((n - 1) * (n - 1)) + ((m - n) * (n - 1));
        System.out.println();
      } else {
        area = ((m - 1) * (m - 1)) + ((n - m) * (m - 1));
      }

      System.out.println(area);

    }
  }
  ```
    