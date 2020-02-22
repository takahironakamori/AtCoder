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
