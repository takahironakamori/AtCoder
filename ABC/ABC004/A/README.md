### ABC004

# A - 流行

  [問題はこちら](https://atcoder.jp/contests/abc004/tasks/abc004_1)


- 発想<br>
  入力で取得した値に 2 をかけたものを出力する。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    cout << 2 * N << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      System.out.println(N*2);
    }
  }
  ```
    