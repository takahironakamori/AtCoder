### ABC094

# A - Cats and Dogs

  [問題はこちら](https://atcoder.jp/contests/abc094/tasks/abc094_a)


- 発想<br>
  A + B が X 以上かつ A が X 以下の場合は、ちょうど X になりえる。<br>
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, X;
    cin >> A >> B >> X;

    if (X <= A + B && A <= X) {
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
      int A = sc.nextInt();
      int B = sc.nextInt();
      int X = sc.nextInt();

      if ((X - A) <= B && A <= X) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }
  }
  ```
    