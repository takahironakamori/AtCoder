### ABC008

# A - アルバム

  [問題はこちら](https://atcoder.jp/contests/abc008/tasks/abc008_1)


- 発想<br>
  T - S + 1 を出力する<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int S, T;
    cin >> S >> T;

    cout << T - S + 1 << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {
    public static void main(String[] args){
      
      Scanner sc = new Scanner(System.in);
      int S = sc.nextInt();
      int T = sc.nextInt();
      
      System.out.println(T - S + 1);
      
    }
  }
  ```
    