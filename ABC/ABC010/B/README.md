### ABC010

# B - 花占い

  [問題はこちら](https://atcoder.jp/contests/abc010/tasks/abc010_2)

- 発想<br>
  条件を満たす花びらの数は、1, 3, 7, 9 の 4 つ。<br>
  a_i の値がどれかと一致すればいいが、一致しない場合は、a_i より小さい数でもっとも近い数との差が毟る数となる。

- 実装のポイント<br>
  引き算してもいいし、足し算してもいい。<br>
  引き算の方が問題にあっている。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int answer = 0;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (a < 3) {
        answer += a - 1; 
      } else if (a < 7) {
        answer += a - 3;
      } else if (a < 9) {
        answer += a - 7;
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
      int n = sc.nextInt();
      int count = 0;

      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        switch (a) {
          case 2:
            count++;
            break;
          case 4:
            count++;
            break;
          case 5:
            count = count + 2;
            break;
          case 6:
            count = count + 3;
            break;
          case 8:
            count++;
            break;
        }
      }

      System.out.println(count);

    }
  }
  ```
    