### ABC012

# A - スワップ

  [問題はこちら](https://atcoder.jp/contests/abc012/tasks/abc012_1)

- 発想<br>
  入力で得たものを B A の順で出力する。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    cout << B << " " << A << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int A = sc.nextInt();
      int B = sc.nextInt();
      System.out.println(B + " " + A);
    }
  }
  ```
    