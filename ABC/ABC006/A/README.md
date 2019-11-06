### ABC006

# A - 世界のFizzBuzz

  [問題はこちら](https://atcoder.jp/contests/abc006/tasks/abc006_1)

- 発想<br>
  N が 3 で割り切れたら YES を、割り切れない場合は NO を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    if (N % 3 == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
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
      if(N%3 == 0){
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }
    }
  }
  ```
    