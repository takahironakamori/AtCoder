### ABC049

# A - 居合を終え、青い絵を覆う / UOIAUAI

  [問題はこちら](https://atcoder.jp/contests/abc049/tasks/abc049_a)

- 発想<br>
  a か e か i か o か u かを判定する。 


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string c;
    cin >> c;

    if (c == "a" || c == "e" || c == "i" || c == "o" || c == "u") {
      cout << "vowel" << endl;
    } else {
      cout << "consonant" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String s = sc.next();


      if (s.equals("a") || s.equals("e") || s.equals("i") || s.equals("o") || s.equals("u") ) {
        System.out.println("vowel");
      } else {
        System.out.println("consonant");
      }

    }
  }
  ```
    