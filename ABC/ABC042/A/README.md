### ABC042

# A - 和風いろはちゃんイージー / Iroha and Haiku (ABC Edition)

  [問題はこちら](https://atcoder.jp/contests/abc042/tasks/abc042_a)


- 発想<br>
  5 と 7 が使われている回数を数える（C++のコード）。<br>
  または、A、B、C の合計が 17 であるか否かを調べる（Javaのコード）
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> count(11);

    int A, B, C;
    cin >> A >> B >> C;

    count[A]++;
    count[B]++;
    count[C]++;

    if (count[5] == 2 && count[7] == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int A = sc.nextInt();
      int B = sc.nextInt();
      int C = sc.nextInt();

      if ((A + B + C) == 17) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }
  }
  ```
    