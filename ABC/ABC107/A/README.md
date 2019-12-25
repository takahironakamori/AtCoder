### ABC107

# A - Train

  [問題はこちら](https://atcoder.jp/contests/abc107/tasks/abc107_a)

- 発想<br>
  N - i + 1 を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, i;
    cin >> N >> i;

    cout << N - i + 1 << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      int i = sc.nextInt();

      System.out.println(N - i + 1);

    }
  }
  ```
    