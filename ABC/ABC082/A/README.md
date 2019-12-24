### ABC082

# A - Round Up the Mean

  [問題はこちら](https://atcoder.jp/contests/abc082/tasks/abc082_a)

- 発想<br>
  s の各文字を昇順にソートし、t の各文字を降順にソートして s < t ならYesを出力する。<br>
  それ以外なら No を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b;
    cin >> a >> b;

    cout << ceil((double) (a + b) / 2) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      double a = sc.nextInt();
      double b = sc.nextInt();
      double average = (a + b) / 2;

      System.out.println((int)Math.ceil(average));

    }
  }
  ```
    