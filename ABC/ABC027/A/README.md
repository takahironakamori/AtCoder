### ABC027

# A - 長方形

  [問題はこちら](https://atcoder.jp/contests/abc027/tasks/abc027_a)


- 発想<br>
  l1 と l2 と l3 で異なる数値が 1 つあるはずなので、その数値を出力する。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;

    if (l1 == l2) {
      cout << l3 << endl;
    } else if (l2 == l3) {
      cout << l1 << endl;
    } else {
      cout << l2 << endl;
    }  

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int l1 = sc.nextInt();
      int l2 = sc.nextInt();
      int l3 = sc.nextInt();

      if ((l1 == l2) && (l2 == l3)) {
        System.out.println(l1);
      } else {
        if (l1 == l2) {
          System.out.println(l3);
        } else if (l2 == l3) {
          System.out.println(l1);
        } else {
          System.out.println(l2);
        }
      }

    }
  }
  ```
    