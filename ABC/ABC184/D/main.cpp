#include <bits/stdc++.h>
using namespace std;

const int X = 100;

// dp[i][j][j] 金貨i枚、銀貨j枚、銅貨k枚ある状態からの期待値
double dp[X+1][X+1][X+1];

int main() {
  
  int A, B, C;
  cin >> A >> B >> C;
  
  for (int i = X - 1; 0 <= i; --i) {
    for (int j = X - 1; 0 <= j; --j) {
      for (int k = X - 1; 0 <= k; --k) {
        if (i + j + k == 0) {
          continue;
        }
        double v = 0;
        v += dp[i+1][j][k] * i;
        v += dp[i][j+1][k] * j;
        v += dp[i][j][k+1] * k;
        dp[i][j][k] = v / (i + j + k) + 1;
      }
    }
  }

  printf("%.10f\n", dp[A][B][C]);
  
  return 0;

}