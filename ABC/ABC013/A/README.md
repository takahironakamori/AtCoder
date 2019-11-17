### ABC013

# A - A

  [問題はこちら](https://atcoder.jp/contests/abc013/tasks/abc013_1)

- 発想<br>
　X が A か B か... E のどれかを判定して結果に応じた数値を出力する。


- 実装のポイント<br>
  for 文で回す方法（C++のコード）と、<br>
  if 文を繰り返す方法（Javaのコード）などがある。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    char X;
    cin >> X;

    string s = "ABCDE";

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == X) {
        cout << i + 1 << endl;
      }
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      String X = sc.next();
      if (X.equals("A")){
        System.out.println(1);
      } else if(X.equals("B")) {
        System.out.println(2);
      } else if(X.equals("C")) {
        System.out.println(3);
      } else if(X.equals("D")) {
        System.out.println(4);
      } else {
        System.out.println(5);
      }
    }
  }
  ```
    