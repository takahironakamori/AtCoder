### ABC032

# A - 高橋君と青木君の好きな数

  [問題はこちら](https://atcoder.jp/contests/abc032/tasks/abc032_a)


- 発想<br>
  n から順番に a および b で割り切れるか否かを調べる。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b, n;
    cin >> a >> b >> n;

    bool flg = true;
    int answer = 0;

    while (flg) {
      if ((n % a) == 0 && (n % b) == 0) {
        answer = n;
        flg = false;
      } else {
        n++;
      }
    }

    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      int n = sc.nextInt();

      for (int i = n; i >= n; i++) {
        if ((i % a) == 0 && (i % b) == 0) {
          System.out.println(i);
          break;
        }
      }

    }
  }
  ```
    