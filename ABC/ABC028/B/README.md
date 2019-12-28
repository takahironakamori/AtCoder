### ABC028

# B - 文字数カウント

  [問題はこちら](https://atcoder.jp/contests/abc028/tasks/abc028_b)


- 発想<br>
  要素数 6 の配列を用意する。<br>
  文字が A の場合は、\[0] を 1 加える。<br>
  文字が B の場合は、\[1] を 1 加える。<br>
  文字が C の場合は、\[2] を 1 加える。<br>
  文字が D の場合は、\[3] を 1 加える。<br>
  文字が E の場合は、\[4] を 1 加える。<br>
  文字が F の場合は、\[5] を 1 加える。<br>
  全部終わったら、配列を \[0] から　\[5] の値を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    vector<int> count(6);

    for (int i = 0; i < S.size(); i++) {
      if (S[i] == 'A') {
        count[0]++;
      } else if (S[i] == 'B') {
        count[1]++;
      } else if (S[i] == 'C') {
        count[2]++;
      } else if (S[i] == 'D') {
        count[3]++;
      } else if (S[i] == 'E') {
        count[4]++;
      } else {
        count[5]++;
      }
    }

    for (int i = 0; i < 6; i++) {
      if (i == 5) {
        cout << count[i] << endl;
      } else {
        cout << count[i] << " ";
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
      String S = sc.next();
      String[] sArr = S.split("");
      int[] answer = new int[6];

      for (int i = 0; i < 6; i++) {
        answer[i] = 0;
      }

      for (int i = 0; i < sArr.length; i++) {
        if (sArr[i].equals("A")) {
          answer[0]++;
        } else if (sArr[i].equals("B")) {
          answer[1]++;
        } else if (sArr[i].equals("C")) {
          answer[2]++;
        } else if (sArr[i].equals("D")) {
          answer[3]++;
        } else if (sArr[i].equals("E")) {
          answer[4]++;
        } else if (sArr[i].equals("F")) {
          answer[5]++;
        }
      }

      for (int i = 0; i < 6; i++) {
        System.out.print(answer[i]);
        if (i != 5){
          System.out.print(" ");
        }
      }

      System.out.println("");

    }
  }
  ```
    