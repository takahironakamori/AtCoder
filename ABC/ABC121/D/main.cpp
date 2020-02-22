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
