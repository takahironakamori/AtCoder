### ABC136

# C - Build Stairs

  [問題はこちら](https://atcoder.jp/contests/abc136/tasks/abc136_c)

- 発想<br>
  右のマスから順に操作を選ぶとすると、できるだけ高くしておいた方が後の選択肢が増える。<br>
  1.右のマスの方が大きい場合は、何もしなくていい。<br>
  2.左のマスが、右のマスよりちょうど 1 高い場合は左のマスを 1 低くする。<br>
  3.上記 1. か 2. を満たさないと No を出力して終了する。<br>
  最も左のマスまで 1. か 2. を満たし続けたら、Yes を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
      cin >> H[i];
    }

    string result = "Yes";
    for (int i = N - 1; 0 < i; i--) {
      if (H[i] < H[i - 1]) {
        if (H[i - 1] - H[i] <= 1) {
          H[i - 1] -= H[i - 1] - H[i];
        } else {
          result = "No";
          break;
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

      int N = sc.nextInt();

      int[] H = new int[N];
      for (int i = 0; i < N; i++) {
        H[i] = sc.nextInt();
      }

      sc.close();

      String result = "Yes";
      
      for (int i = N - 1; 0 < i; i--) {
        if (H[i] < H[i - 1]) {
          if (H[i - 1] - H[i] <= 1) {
            H[i - 1] -= H[i - 1] - H[i];
          } else {
            result = "No";
            break;
          }
        }
      }

      System.out.println(result);

    }

  }
  ```
    