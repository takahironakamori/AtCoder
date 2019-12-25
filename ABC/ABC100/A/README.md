### ABC100

# A - Happy Birthday!

  [問題はこちら](https://atcoder.jp/contests/abc100/tasks/abc100_a)

- 発想<br>
  A と B が 8 以下であればいい<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    if (A <= 8 && B <= 8) {
      cout << "Yay!" << endl;
    } else {
      cout << ":(" << endl;
    }

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

      if ((A <= 8) && (B <= 8)) {
        System.out.println("Yay!");  
      } else {
        System.out.println(":(");
      }

    }
  }
  ```
    