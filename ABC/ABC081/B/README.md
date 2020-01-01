### ABC081

# B - Shift only

  [問題はこちら](https://atcoder.jp/contests/abc081/tasks/abc081_b)


- 発想<br>
  A_1 から A_N までの数字が全て 2 で割り切れる場合は、<br>
  カウントに 1 加え、A_1 から A_N までを 2 で割ったものに更新する。<br>
  2 で割り切れないものがあるまで繰り返す。<br>
  ビットを利用する解き方もある。（Javaのコード）
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    bool flg = true;
    int answer = 0;

    while (flg) {
      for (int i = 0; i < N; i++) {
        if (A[i] % 2 != 0) {
          flg = false;
          break;
        }
        A[i] /= 2; 
      }
      if (flg) {
        answer++;
      }
    }

    cout << answer << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  // 参考サイト https://qiita.com/malbare932/items/cb942a12d175157134de

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int[] A = new int[N];

      int b = 0; // A_1からA_Nまでのビット和

      for (int i = 0; i < N; i++) {
        A[i] = sc.nextInt();
        b = (A[i] | b); 
      }

      sc.close();

      int count = 0;

      while((b & 1) == 0) { // ビット和の最下位ビットが0である限り
        b = b >> 1; // ビット和を1ビットシフトする（= 元の値を1/2倍にする） <-> 左シフト（<<）は元の値を2倍にする
        count++;
      }

      System.out.println(count);

    }

  }
  ```
    