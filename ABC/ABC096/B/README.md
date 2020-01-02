### ABC096

# B - Maximum Sum

  [問題はこちら](https://atcoder.jp/contests/abc096/tasks/abc096_b)


- 発想<br>
  A, B, C のうち最も大きい数字を K 回 2 倍する。<br>
  A + B + C を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> ABC(3);
    int K;
    cin >> ABC[0] >> ABC[1] >> ABC[2] >> K;

    sort(ABC.begin(), ABC.end(), std::greater<int>());

    for (int i = 0; i < K; i++) {
      ABC[0] *= 2;
    }

    cout << ABC[0] + ABC[1] + ABC[2] << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int A = sc.nextInt();
      int B = sc.nextInt();
      int C = sc.nextInt();
      int K = sc.nextInt();

      sc.close();

      if (C <= B && B <= A) {
        for (int i = 0; i < K; i++) {
          A = A * 2;
        }
      } else if (C <= B && A <= B) {
        for (int i = 0; i < K; i++) {
          B = B * 2;
        }
      } else {
        for (int i = 0; i < K; i++) {
          C = C * 2;
        }
      }

      System.out.println(A + B + C);

    }

  }
  ```
    