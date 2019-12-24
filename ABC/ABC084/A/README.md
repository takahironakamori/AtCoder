### ABC084

# A - New Year

  [問題はこちら](https://atcoder.jp/contests/abc084/tasks/abc084_a)


- 発想<br>
  48 - M を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int M;
    cin >> M;

    cout << 48 - M << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int M = sc.nextInt();

      System.out.println((24 - M) + 24);

    }
  }
  ```
    