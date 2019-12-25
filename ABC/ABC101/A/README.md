### ABC101

# A - Eating Symbols Easy

  [問題はこちら](https://atcoder.jp/contests/abc101/tasks/abc101_a)


- 発想<br>
  1文字ずつ、+ なら 1 加える、<br>
  - なら 1 減らすを繰り返す。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    int answer = 0;

    for (int i = 0; i < 4; i++) {
      if (S[i] == '+') {
        answer++;
      } else {
        answer--;
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
      String S = sc.next();

      String S1 = S.substring(0,1);
      String S2 = S.substring(1,2);
      String S3 = S.substring(2,3);
      String S4 = S.substring(3,4);

      int count = 0;

      if (S1.equals("+")) {
        count++; 
      } else {
        count--; 
      }

      if (S2.equals("+")) {
        count++; 
      } else {
        count--; 
      }

      if (S3.equals("+")) {
        count++; 
      } else {
        count--; 
      }

      if (S4.equals("+")) {
        count++; 
      } else {
        count--; 
      }

      System.out.println(count);

    }
  }
  ```
    