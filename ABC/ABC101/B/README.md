### ABC101

# B - Digit Sums

  [問題はこちら](https://atcoder.jp/contests/abc101/tasks/abc101_b)


- 発想<br>
  N を文字列にしたり、また数値に戻したりして、各行の和を計算する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    string s = to_string(N);

    int sn = 0;
    for (int i = 0; i < s.size(); i++) {
      sn += s[i] - '0';
    }

    if (N % sn == 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String N = sc.next();

      sc.close();

      String[] arr = N.split("");

      int n = Integer.valueOf(N);

      int sn = 0;

      for (int i = 0; i < arr.length; i++) {
        sn += Integer.valueOf(arr[i]);
      }

      if (n % sn == 0) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }

  }
  ```
    