### ABC019

# B - 高橋くんと文字列圧縮

  [問題はこちら](https://atcoder.jp/contests/abc019/tasks/abc019_2)

- 発想<br>
  1文字ずつ調べる。<br>
  1文字前と同じ文字であればカウントを増やして、違う文字だったらカウントを出力して、文字を出力しカウントをリセットする。
  
  
- 実装のポイント<br>
  最初と最後の文字の扱いに注意する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    char current = s[0];
    int count = 0;

    cout << current;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == current) {
        count++;
      } else {
        cout << count;
        current = s[i];
        count = 1;
        cout << current;
      }
    }

    cout << count << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String s = sc.next();
      sc.close();

      String[] S = s.split("");
      String current = S[0];

      int count = 0;

      System.out.print(current);

      for (int i = 0; i < S.length; i++) {
        if (S[i].equals(current)) {
          count++;
        } else {
          System.out.print(count);
          current = S[i];
          count = 1;
          System.out.print(current);
        }
      }

      System.out.println(count);

    }
  }
  ```
    