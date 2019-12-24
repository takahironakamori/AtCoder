### ABC051

# A - Haiku

  [問題はこちら](https://atcoder.jp/contests/abc051/tasks/abc051_a)

- 発想<br>
  文字列をカンマで区切て、3 つの要素を出力する。（Javaのコード）<br>
  または、1文字目から順番に出力する。ただし、5 文字目と 13 文字目は" "（半角スペース）を出力する。（C++のコード）


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
      if (i == 5 || i == 13) {
        cout << " ";
      } else {
        cout << s[i];
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
      String s = sc.next();
      String[] arr = s.split(",");

      System.out.println(arr[0] + " " + arr[1] + " " + arr[2]);

    }
  }
  ```
    