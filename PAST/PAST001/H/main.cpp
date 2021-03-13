#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  // カードの在庫
  vector<int> C(N+1);
  
  // 番号が奇数のカードの最小枚数
  int minOdd = 1000001000;

  // 全てのカードの最小枚数
  int minAll = 1000001000;

  // カードが買われた枚数をメモしておく配列
  vector<int> buy(N+1);

  // 単品販売で売れた枚数
  long long buyOnly = 0;

  // セット販売で売れた枚数
  long long buyOdd = 0;

  // 全種類販売で売れた枚数
  long long buyAll = 0;

  for (int i = 1; i < N+1; i++) {
    cin >> C[i];
    minAll = min(minAll, C[i]);
    if (i % 2 == 1) {
      minOdd = min(minOdd, C[i]);
    }
  }

  int Q;
  cin >> Q;

  int S1;
  int S2;
  int S3;
  for (int i = 0; i < Q; i++) {
    cin >> S1;
    if (S1 == 1) {
      cin >> S2 >> S3;
      int r = C[S2] - buy[S2] - buyAll;
      if (S2 % 2 == 1) {
        r -= buyOdd;
      }
      if (S3 <= r) {
        buy[S2] += S3;
        buyOnly += S3;
        minAll = min(minAll, r - S3);
        if (S2 % 2 == 1) {
          minOdd = min(minOdd, r - S3);
        }
      }
    } else if (S1 == 2) {
      cin >> S2;
      if (S2 <= minOdd) {
        buyOdd += S2;
        minOdd = minOdd - S2;
        minAll = min(minAll, minOdd);
      }
    } else {
      cin >> S2;
      if (S2 <= minAll) {
        buyAll += S2;
        minAll -= S2;
        minOdd -= S2;
      }
    }
  }

  long long ans = buyOnly;
  ans += buyOdd * ((N + 1) / 2);
  ans += buyAll * N;

  cout << ans << endl;

  return 0;
}