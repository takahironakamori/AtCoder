### ABC016

# B - A±B Problem

  [問題はこちら](https://atcoder.jp/contests/abc016/tasks/abc016_2)

- 発想<br>
  分岐して確認する。
  


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C;
    cin >> A >> B >> C;

    string answer = "!";

    if ((A + B) == C && (A - B) == C) {
      answer = "?";
    } else if ((A + B) == C) {
      answer = "+";
    } else if ((A - B) == C){
      answer = "-";
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
      int A = sc.nextInt();
      int B = sc.nextInt();
      int C = sc.nextInt();

      if ((A + B) == C && (A - B) == C) {
        System.out.println("?");
      } else if ((A + B) == C) {
        System.out.println("+");
      } else if ((A - B) == C) {
        System.out.println("-");
      } else {
        System.out.println("!");
      }

    }
  }
  ```
    