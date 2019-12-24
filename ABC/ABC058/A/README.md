### ABC058

# A - ι⊥l

  [問題はこちら](https://atcoder.jp/contests/abc058/tasks/abc058_a)

- 発想<br>
  b - a と c - b を比較する
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if (b - a == c - b) {
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
      int a = sc.nextInt();
      int b = sc.nextInt();
      int c = sc.nextInt();

      if ((b - a) == (c - b)) {
        System.out.println("YES");  
      } else {
        System.out.println("NO");
      }

    }
  }
  ```
    