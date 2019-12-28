### ABC029

# B - カキ

  [問題はこちら](https://atcoder.jp/contests/abc029/tasks/abc029_b)


- 発想<br>
  答え用の変数を用意する。<br>
  r が含まれていることが 1 回できたら答えに 1 加える。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int answer = 0;

    for (int i = 0; i < 12; i++) {

      string S;
      cin >> S;
      bool flg = true;

      for (int j = 0; j < S.size(); j++) {
        if (S[j] == 'r' && flg == true) {
          answer++;
          flg = false;
        }
      } 

    }

    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String[] S = new String[12];

      for (int i = 0; i < 12; i++) {
        S[i] = sc.next();
      }

      int answer = 0;

      for (int i = 0; i < 12; i++) {
        int result = S[i].indexOf("r");
        if (result != -1) {
          answer++;
        }
      }

      System.out.println(answer);

    }
  }
  ```
    