### ABC010

# A - ハンドルネーム

  [問題はこちら](https://atcoder.jp/contests/abc010/tasks/abc010_1)


- 発想<br>
  取得した文字列に "pp" を加えたものを出力する<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    cout << S + "pp" << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      String S = sc.next();
      System.out.println(S + "pp");
    }
  }
  ```
    