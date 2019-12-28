### ABC028

# A - テスト評価

  [問題はこちら](https://atcoder.jp/contests/abc028/tasks/abc028_a)


- 発想<br>
  分岐を複数する。 <br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    if (N == 100) {
      cout << "Perfect" << endl;
    } else if (N <= 99 && 90 <= N) {
      cout << "Great" << endl;
    } else if (N <= 89 && 60 <= N){
      cout << "Good" << endl;
    } else {
      cout << "Bad" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();

      if (N == 100) {
        System.out.println("Perfect");
      } else if ((90 <= N) && (N <= 99)) {
        System.out.println("Great");
      } else if ((60 <= N) && (N <= 89)) {
        System.out.println("Good");
      } else {
        System.out.println("Bad");
      }

    }
  }
  ```
    