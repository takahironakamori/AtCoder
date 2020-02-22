### ABC121

# D - XOR World

  [問題はこちら](https://atcoder.jp/contests/abc121/tasks/abc121_d)

#### XOR(^)とは

  0 ^ 0 = 0 <br>
  1 ^ 0 = 1 <br>
  0 ^ 1 = 1 <br>
  1 ^ 1 = 0 <br>

  数を2進数でみたときに、それぞれの桁が、<br>
  少なくとも一方だけ 1 ならば 1 となる。<br>
  繰り上がりしない足し算というイメージ。<br>

## 発想

  a を(0 から 3 までの XOR)<br>
  b を(4 から 8 までの XOR)<br>
  c を(0 から 8 までの XOR)<br>
  の場合、<br>
  a xor b = c や<br>
  c xor a = b が成り立つ<br>

  A から B までの XOR は、(0 から B までの XOR) XOR (0 から A - 1 までの XOR) を計算することで求めることができる。<br>
  XOR は繰り上がりがないのでそれぞれの桁だけをみればいい。<br>
  それぞれの桁 XOR は 1 の個数が奇数の場合は 1 となり、偶数の場合は 0 となる（コード1）。<br>

  また、以下のように、0 から順番に 2 個ずつ XOR を求めるとすべて 1 になる。<br>

  0 -> 000<br>
  1 -> 001<br>
  --- 0 xor 1 = 1 ---<br>
  2 -> 010<br>
  3 -> 011<br>
  --- 2 xor 3 = 1 ---<br>
  4 -> 100<br>

  この性質を利用して、0 から A や B までに 2 個組が何個作れるかを数えて、<br>
  個数が奇数なら 1 、偶数になると 0 になる。<br>
  しかし、A や B が奇数の場合は、2 個組から溢れる 1 個があるから、最後に XOR を行う（コード2）。<br>

  なお、桁数を考えるときは、<br>
  10^3(=1000) < 2^10(=1024) なので、<br>
  この問題の最大値 10^12 < 2^40 と言えるので、40桁くらいになる予想できる。<br>


## コード1（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  // 0 から v までの XOR を計算する
  long long f(long long v){

    if (v == 0) {
      return 0;
    }

    // 0 から始めているので v + 1 個の整数で考える
    v++;

    // 答え
    long long res = 0;

    // i 桁目の偶奇を調べる
    for (int i = 0; i < 50; i++) {

      // 1 の個数を計算するために、周期を求める
      long long loop = (1LL << (i+1));

      // 1 の個数 = ループした回数 × 1 が出てくる回数
      // 0(000) から 4(100) までの場合下 2 桁までを数える
      long long count = (v / loop) * (loop / 2);

      // 0(000) から 4(100) までの場合、 3 桁目で 1 が出てくる回数を加える
      count += max(0LL, (v % loop) - (loop / 2));

      // その桁が 奇数 だったら答えに加える
      if (count % 2 == 1) {
        res += 1LL << i;
      }

    }

    return res;
  }

  int main() {

    long long A, B;
    cin >> A >> B;

    // (0 から B までの XOR) XOR (0 から A - 1 までの XOR)
    long long answer = f(B) ^ f(A - 1);

    cout << answer << endl;

    return 0;

  }
  ```

## コード2（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  // 0 から v までの XOR を計算する
  long long f(long long v){

    // 答え
    long long res = 0;

    // 0 -> 000
    // 1 -> 001
    // --- 0 xor 1 = 1 ---
    // 2 -> 010
    // 3 -> 011
    // --- 2 xor 3 = 1 ---
    // 4 -> 100

    // v が作れる 2 個組の個数
    long long count = (v + 1) / 2;

    // 奇数なら 1 偶数なら 0
    res = count % 2;

    // v が偶数だと 2 個組から 1 個余るので、
    // 余った 1 個と res で XOR を計算する
    if (v % 2 == 0) {
      res = res ^ v;
    }

    return res;
  }

  int main() {

    long long A, B;
    cin >> A >> B;

    // (0 から B までの XOR) XOR (0 から A - 1 までの XOR)
    long long answer = f(B) ^ f(A - 1);

    cout << answer << endl;

    return 0;

  }
  ```
