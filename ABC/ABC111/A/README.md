### ABC111

# A - AtCoder Beginner Contest 999

  [問題はこちら](https://atcoder.jp/contests/abc111/tasks/abc111_a)

- 発想<br>
  1 と 9 を入れ替える<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string n;
    cin >> n;

    for (int i = 0; i < 3; i++) {
      if (n[i] == '1') {
        n[i] = '9';
      } else if (n[i] == '9') {
        n[i] = '1'; 
      }
    }

    cout << n << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String n = sc.next();
      String n1 = n.substring(0,1);
      String n2 = n.substring(1,2);
      String n3 = n.substring(2,3);
      String a1 = "9";
      String a2 = "9";
      String a3 = "9";

      if (n1.equals("9")) {
        a1 = "1";
      }

      if (n2.equals("9")) {
        a2 = "1";
      }

      if (n3.equals("9")) {
        a3 = "1";
      }

      System.out.println(a1 + a2 + a3);

    }
  }
  ```
    