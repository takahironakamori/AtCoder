### ABC129

# A - Airplane

  [問題はこちら](https://atcoder.jp/contests/abc129/tasks/abc129_a)


- 発想<br>
  全部のパターンを検討する。(Java のコード)<br>
  または、小さい順に 1 番目と 2 番目の値を足したものを出力する。(C++ のコード)
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> T(3);
    cin >> T[0] >> T[1] >> T[2];

    sort(T.begin(), T.end());

    cout << T[0] + T[1] << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int P = sc.nextInt();
      int Q = sc.nextInt();
      int R = sc.nextInt();
      sc.close();

      int[] arr = new int[]{P + Q, Q + R, R + P};

      int min = arr[0];
      for (int i = 0; i < arr.length; i++) {
        int v = arr[i];
        if (v < min) {
          min = v;
        }
      }
      System.out.println(min);

    }
  }
  ```
    