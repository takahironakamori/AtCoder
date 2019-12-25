### ABC105

# A - AtCoder Crackers

  [問題はこちら](https://atcoder.jp/contests/abc105/tasks/abc105_a)

- 発想<br>
  N が K で割り切れる場合は、0 <br>
  そうでない場合は、1 を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    if (N % K == 0) {
      cout << 0 << endl;
    } else {
      cout << 1 << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      int K = sc.nextInt();

      if (N % K == 0) {
        System.out.println(0);
      } else {
        System.out.println(1);
      }

    }
  }
  ```
    