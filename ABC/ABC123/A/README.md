### ABC123

# A - Five Antennas

  [問題はこちら](https://atcoder.jp/contests/abc123/tasks/abc123_a)

- 発想<br>
  5 * 4 / 2 = 10 通りを確認する。（Javaのコード）<br>
  または、e - a が k 未満か否かで判断する。（C++のコード）<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;

    if (k < e - a) {
      cout << ":(" << endl;
    } else {
      cout << "Yay!" << endl;
    }

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);

      int[] arr = new int[5];

      for (int i = 0; i < 5; i++) {
        arr[i] = sc.nextInt();
      }

      int k = sc.nextInt();

      String result = "Yay!";

      loop: for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
          if (k < (arr[j] - arr[i])) {
            result = ":(";
            break loop;
          }
        }
      }

      System.out.println(result);

    }
  }
  ```
    