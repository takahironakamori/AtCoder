### ABC023

# B - 手芸王

  [問題はこちら](https://atcoder.jp/contests/abc023/tasks/abc023_b)


- 発想<br>
  手順を順番に行い、S と同じになったらその手順が回答となる。<br>
  手順を繰り返し行なっていて、Sと異なったまま文字数が S を超えたら -1 となる。



- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    string S;
    cin >> S;

    bool flg = true;
    int answer = 0;
    string current = "";

    while (flg) {
      if (answer == 0) {
        current += "b";
      } else if (answer % 3 == 1) {
        current = "a" + current + "c";
      } else if (answer % 3 == 2) {
        current = "c" + current + "a";
      } else if (answer % 3 == 0 && 0 < answer) {
        current = "b" + current + "b";
      }
      if (S == current) {
        flg = false;
      } else if (N <= current.size()) {
        flg = false;
        answer = -1;
      } else {
        answer++;
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
      int N = sc.nextInt();
      String S = sc.next();

      int count = (N + 1 ) / 2;
      String answer = "b";
      int result = -1;

      for (int i=1; i<count; i++) {
        if ((i % 3) == 1) {
          answer = "a" + answer + "c";
        } else if ((i % 3) == 2) {
          answer = "c" + answer + "a";
        } else if ((i % 3) == 0) {
          answer = "b" + answer + "b";
        }
      }

      if (answer.equals(S)) {
        result = count - 1;
      }    

      System.out.println(result);

    }
  }
  ```
    