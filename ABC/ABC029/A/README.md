### ABC029

# A - 複数形

  [問題はこちら](https://atcoder.jp/contests/abc029/tasks/abc029_a)


- 発想<br>
  入力で取得した文字列の末尾に s を加えたものを出力する<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string W;
    cin >> W;

    cout << W + "s" << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      String W = sc.next();
      System.out.println(W + "s");
    }
  }
  ```
    