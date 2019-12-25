### ABC099

# A - ABD

  [問題はこちら](https://atcoder.jp/contests/abc099/tasks/abc099_a)

- 発想<br>
  N が 999 以下なら ABC <br>
  そうでない場合は ABD を出力。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    if (N <= 999) {
      cout << "ABC" << endl;
    } else {
      cout << "ABD" << endl;
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

      if (1000 <= N) {
        System.out.println("ABD");  
      } else {
        System.out.println("ABC");
      }

    }
  }
  ```
    