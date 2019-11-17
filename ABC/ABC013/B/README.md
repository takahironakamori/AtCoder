### ABC013

# B - 錠

  [問題はこちら](https://atcoder.jp/contests/abc013/tasks/abc013_2)

- 発想<br>  
  a と b の差の絶対値と、10 - その絶対値 で小さい方が回答となる（C++のコード）。<br>
  
- 実装のポイント<br>
  分岐を駆使する方法でもいい（Javaのコード）。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b;
    cin >> a >> b;

    int d = abs(a - b);
    
    cout << min(d, 10 - d) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int a = sc.nextInt();
      int b = sc.nextInt();

      sc.close();

      int count = 0;

      if (a <= b){
        if (5 <= (b - a)) {
          count = 10 + a - b;
        } else {
          count = b - a;
        }
      } else {
        if (5 <= (a - b)) {
          count = 10 + b - a;
        } else {
          count = a - b;
        }
      }

      System.out.println(count);

    }

  }
  ```
    