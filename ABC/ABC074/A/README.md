### ABC074

# A - Bichrome Cells

  [問題はこちら](https://atcoder.jp/contests/abc074/tasks/abc074_a)


- 発想<br>
  N * N - A を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, A;
    cin >> N >> A;

    cout << N * N - A << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      int A = sc.nextInt();

      System.out.println(N * N - A);

    }
  }
  ```
    