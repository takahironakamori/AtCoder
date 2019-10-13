### ABC003

# B - AtCoderトランプ

  [問題はこちら](https://atcoder.jp/contests/abc003/tasks/abc003_2)

- 発想<br>
  文字を1文字ずつ確認していく。<br>
  同じ文字ならOK。<br>
  異なる文字なら、片方が @ で、もう一方が a、t、c、o、d、e、r のどれかあればOK

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S, T;
    cin >> S >> T;

    string result = "You can win";

    for (int i = 0; i < S.size(); i++) {
      if (S[i] != T[i]) {
        if (S[i] == '@') {
          if (T[i] != 'a' && T[i] != 't' && T[i] != 'c' && T[i] != 'o' && T[i] != 'd' && T[i] != 'e' && T[i] != 'r') {
            result = "You will lose";
          }
        } else if (T[i] == '@') {
          if (S[i] != 'a' && S[i] != 't' && S[i] != 'c' && S[i] != 'o' && S[i] != 'd' && S[i] != 'e' && S[i] != 'r') {
            result = "You will lose";
          }
        } else {
          result = "You will lose";
        }
      }
    }

    cout << result << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String s = sc.next();
      String t = sc.next();

      sc.close();

      String[] S = s.split("");
      String[] T = t.split("");

      String result = "You can win";

      for (int i = 0; i < S.length; i++) {
        if (S[i].equals("@")) {
          if (!(T[i].equals("@")) &&
              !(T[i].equals("a")) &&
              !(T[i].equals("t")) && 
              !(T[i].equals("c")) && 
              !(T[i].equals("o")) && 
              !(T[i].equals("d")) && 
              !(T[i].equals("e")) &&
              !(T[i].equals("r"))) {
                result = "You will lose";
                break;
          }
        } else if (T[i].equals("@")) {
          if (!(S[i].equals("@")) &&
              !(S[i].equals("a")) &&
              !(S[i].equals("t")) && 
              !(S[i].equals("c")) && 
              !(S[i].equals("o")) && 
              !(S[i].equals("d")) && 
              !(S[i].equals("e")) &&
              !(S[i].equals("r"))) {
                result = "You will lose";
                break;
          }
        } else if (!(S[i].equals(T[i]))) {
          result = "You will lose";
          break;
        }
      }

      System.out.println(result);

    }

  }
  ```
    