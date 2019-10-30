### ABC002

# A - 正直者

  [問題はこちら](https://atcoder.jp/contests/abc002/tasks/abc002_1)

- 発想<br>
  比較して、大きい方を出力する。

- 実装のポイント<bt>
  max を使ってもいいし、if 文で分岐してもいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int X, Y;
    cin >> X >> Y;

    cout << max(X,Y) << endl;

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
      if(a<b){
        System.out.println(b);
      } else {
        System.out.println(a);
      }
    }
  }
  ```
    