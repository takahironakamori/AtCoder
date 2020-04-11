#include <bits/stdc++.h>
using namespace std;

int main() {

  long long N, H, A, B, C, D, E;
  cin >> N >> H >> A >> B >> C >> D >> E;

  long long answer = 1LL<<60;

  // i ... 普通の食事の回数
  // j ... 質素な食事の回数
  // k ... 食事抜きの回数
  // h ... 満腹度
  // j > (N - i)E - H - Bi / (D + E)
  for (int i = 0; i <= N; i++) {

    // jの回数を計算する
    long long j = 0;
    long long a = N * E - i * E - H - B * i;
    if (a > 0) {
      j =  a / (D + E) + 1;
    }

    // kの回数を計算する
    long long k = N - i - j;

    // 満足度を計算する
    long long h = H + B * i + D * j - E * k;

    if (h > 0) {
      // 食費を計算する
      long long ans = A * i + C * j;
      answer = min(ans, answer);
    }
  }

  cout << answer << endl;

  return 0;

}
