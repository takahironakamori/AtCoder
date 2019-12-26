### ABC116

# A - Right Triangle

  [問題はこちら](https://atcoder.jp/contests/abc116/tasks/abc116_a)

- 発想<br>
  AB * BC / 2 を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> ABC(3);
    cin >> ABC[0] >> ABC[1] >> ABC[2];

    cout << ABC[0] * ABC[1] / 2 << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int AB = sc.nextInt();
      int BC = sc.nextInt();

      System.out.println(AB * BC / 2);

    }
  }
  ```
    