### ABC077

# A - Rotation

  [問題はこちら](https://atcoder.jp/contests/abc077/tasks/abc077_a)

- 発想<br>
  文字列をひっくり返して同じ文字列か否かを確認する。<br>
  または、1文字ずつ分解してい考える。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string c1, c2;
    cin >> c1 >> c2;

    reverse(c2.begin(), c2.end());

    if (c1 == c2) {
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
      String C1 = sc.next();
      String C2 = sc.next();

      String C11 = C1.substring(0,1);
      String C12 = C1.substring(1,2);
      String C13 = C1.substring(2,3);
      String C21 = C2.substring(0,1);
      String C22 = C2.substring(1,2);
      String C23 = C2.substring(2,3);

    if ((C11.equals(C23)) && (C12.equals(C22)) && (C21.equals(C13))) {
        System.out.println("YES");
      } else {
      System.out.println("NO");
      }

    }
  }
  ```
    