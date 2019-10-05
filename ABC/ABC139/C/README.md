### ABC139

# C - Lower

  [問題はこちら](https://atcoder.jp/contests/abc139/tasks/abc139_c)

- 発想
  
  カウントと最大値を覚えていくための変数を用意する。<br>
  右隣のマスの高さが今のマスの高さ以下であればカウントを増やす。<br>
  右隣のマスの高さが今のマスの高さ未満であれば、カウントが最大値より大きかを確認し、カウントを0にする。<br>
  すべて確認が終わったときの最大値が回答となる。
  
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

    int count = 0;
    int max_ = 0;

    for (int i = 0; i < N; i++) {
      if (i != N - 1) {
        if (H[i+1] <= H[i]) {
          count++;
        } else {
          max_ = max(max_, count);
          count = 0;
        }
      } else {
        max_ = max(max_, count);
      }
    }

    cout << max_ << endl;

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

      int count = 0;
      int max = 0;

      for (int i = 0; i < N; i++) {
        if (i != N - 1) {
          if (H[i] >= H[i+1]) {
            count++;
          } else {
            max = Math.max(max, count);
            count = 0;
          }
        } else {
          max = Math.max(max, count);
        }
      }

      System.out.println(max);

    }

  }

  ```
    