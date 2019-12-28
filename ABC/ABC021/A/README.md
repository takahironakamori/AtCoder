### ABC021

# A - 足し算

  [問題はこちら](https://atcoder.jp/contests/abc021/tasks/abc021_a)


- 発想<br>
  N 回 1 を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    cout << N << endl;

    for (int i = 0; i < N; i++) {
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
      int answer = 0;
      System.out.println(N);

      for (int i = 0; i < N; i++) {
        System.out.println(1);
      }

    }
  }
  ```
    