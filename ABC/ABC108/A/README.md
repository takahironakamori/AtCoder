### ABC108

# A - Pair

  [問題はこちら](https://atcoder.jp/contests/abc108/tasks/abc108_a)

- 発想<br>
  K を 2 で割った値（Eとする）と K - E をかけたものを出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int K;
    cin >> K;

    int E = K / 2;

    cout << E * (K - E) << endl;

  }
  ```

- コード（Java）

  ```java
import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int K = sc.nextInt();

    if (K % 2 == 0) {
      System.out.println((K / 2) * (K / 2));
    } else {
      System.out.println((K / 2) * (K / 2 + 1));
    }

  }
}
  ```
    