### ABC056

# A - HonestOrDishonest

  [問題はこちら](https://atcoder.jp/contests/abc056/tasks/abc056_a)

- 発想<br>
  最小値を考える場合「x - i」は使わず、「x + i」と「移動しない」の2パターンですべて X に対応できる。<br>
  X を 11　とすると、1秒、2秒、3秒のときは、1 3 6 と進み、4秒のときは止まり、5秒後と 11 となる。<br>
  X を 11　の場合ですべて進むを選択すると、1 3 6 10 15 と進み、5秒後に 11 を超える。<br>
  X を 7 とすると、1秒、2秒のときは、1 3 と進み、3秒のときは止まり、4秒後にと 7 となる。<br>
  X を 7　の場合ですべて進むを選択すると、1 3 6 10 と進み、4秒後に 7 を超える。<br>
  すべて進むと仮定した場合と結果は同じになる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string a, b;
    cin >> a >> b;

    string answer = "";

    if (a == "H") {
      if (b == "H") {
        answer = "H";
      } else {
        answer = "D";
      }
    } else {
      if (b == "H") {
        answer = "D";
      } else {
        answer = "H";
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
      String a = sc.next();
      String b = sc.next();

      if (a.equals("H")) {
        if (b.equals("H")) {
          System.out.println("H");
        } else {
          System.out.println("D");
        }
      } else {
        if (b.equals("H")) {
          System.out.println("D");
        } else {
          System.out.println("H");
        }
      }

    }
  }
  ```
    