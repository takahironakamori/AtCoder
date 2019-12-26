### ABC122

# A - Double Helix

  [問題はこちら](https://atcoder.jp/contests/abc122/tasks/abc122_a)

- 発想<br>
  b が A ならば T<br>
  b が T ならば A<br>
  b が C ならば G<br>
  b が G ならば C<br>
  を出力する
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string b;
    cin >> b;

    if (b == "A") {
      cout << "T" << endl;
    } else if (b == "T") {
      cout << "A" << endl;
    } else if (b == "C") {
      cout << "G" << endl;
    } else {
      cout << "C" << endl;
    }

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String b = sc.next();

      if (b.equals("A")) {
        System.out.println("T");
      } else if (b.equals("C")) {
        System.out.println("G");
      } else if (b.equals("T")) {
        System.out.println("A");
      } else {
        System.out.println("C");
      }

    }
  }
  ```
    