### ABC143

# C - Slimes

  [問題はこちら](https://atcoder.jp/contests/abc143/tasks/abc143_c)

- 発想<br>
  初期値 1 のカウントを用意する。<br>
  1文字目から順番に前と同じ文字であれば次の文字に進み、<br>
  異なる文字であればカウントを増やす。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    string S;
    cin >> S;

    int answer = 1;
    char current = S[0];

    for (int i = 0; i < N; i++) {
      if (current != S[i]) {
        current = S[i];
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

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      String s = sc.next();
      sc.close();

      String[] S = s.split("");

      int answer = 1;
      String current = S[0];

      for (int i = 0; i < N; i++) {
        if (!current.equals(S[i])) {
          current = S[i];
          answer++;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    