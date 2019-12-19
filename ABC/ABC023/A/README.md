### ABC023

# A - 加算王

  [問題はこちら](https://atcoder.jp/contests/abc023/tasks/abc023_a)

- 発想<br>
  X を 10 で割った値に X を 10 で割ったときのあまりを足す。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int X;
    cin >> X;

    cout << X / 10 + X % 10 << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int X = sc.nextInt();

      System.out.println(X/10 + X%10);

    }
  }
  ```
    