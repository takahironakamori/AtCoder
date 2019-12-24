### ABC076

# A - Rating Goal

  [問題はこちら](https://atcoder.jp/contests/abc076/tasks/abc076_a)

- 発想<br>
  A と B が同じ -> C を出力<br>
  A と C が同じ -> B を出力<br>
  B と C が同じ -> A を出力<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int R, G;
    cin >> R >> G;

    cout << G * 2 - R << endl;

  }
  ```

- コード（Java）
  ```java
import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int R = sc.nextInt();
    int G = sc.nextInt();

    System.out.println((G * 2) - R);

  }
}
  ```
    