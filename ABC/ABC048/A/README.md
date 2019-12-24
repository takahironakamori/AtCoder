### ABC048

# A - AtCoder *** Contest

  [問題はこちら](https://atcoder.jp/contests/abc048/tasks/abc048_a)

- 発想
  各文字の最初の文字を出力すればいい。<br>
  1 文字目と 3 文字目は A と C で決め打ちでもいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string a, b, c;
    cin >> a >> b >> c;

    cout << a[0] << b[0] << c[0] << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String atcoder = sc.next();
      String s = sc.next();
      String[] arr = s.split("");

      System.out.println("A" + arr[0] + "C");

    }
  }
  ```
    