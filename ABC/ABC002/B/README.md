### ABC002

# B - 罠

  [問題はこちら](https://atcoder.jp/contests/abc002/tasks/abc002_2)

- 発想<br>
  文字を1文字ずつ確認していく。<br>
  文字が a, i, u, e, o でなければ、出力すればいい。<br>
  または、a, i, u, e, o の文字を""（なし）に置き換えた後の文字列を出力してもいい。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string W;
    cin >> W;

    for (int i = 0; i < W.size(); i++) {
      if (W[i] != 'a' && W[i] != 'i' && W[i] != 'u' && W[i] != 'e' && W[i] != 'o') {
        cout << W[i];
      }
    }

    cout << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      String W = sc.next();
      String r = W.replaceAll("[a,i,u,e,o]+", "");
      System.out.println(r);
    }
  }
  ```
    