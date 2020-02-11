#include <bits/stdc++.h>
using namespace std;

long long count(long long n) {

 string s = to_string(n);

 // dp[i][j][k]
 // i:確定している桁数（ちょっと多めに）
 // j:条件を満たすか(1)か否(0)か
 // k:N未満(1)か否(0)か
 long long dp[25][2][2];

 // 配列の全部に 0 を入れる
 for (int i = 0; i < 25; i++) {
   for (int j = 0; j < 2; j++) {
     for (int k = 0; k < 2; k++) {
       dp[i][j][k] = 0;
     }
   }
 }

 // 初期化
 dp[0][0][0] = 1;

 for (int i = 0; i < s.size(); i++) {
   for (int j = 0; j < 2; j++) {
     for (int k = 0; k < 2; k++) {

       // 1 桁ずつ見ていく
       int c_ = s[i] - '0';

       // N未満の場合は、9 まで調べる
       if (k == 1) {
         c_ = 9;
       }

       for (int c = 0; c < c_ + 1; c++) {

         // 値を入れる場所を決める
         int i_ = i + 1;
         int j_ = j;
         int k_ = k;

         // 条件 -----
         // j が 4 か 9 の場合は条件を満たす
         // j が 4 か 9 以外の場合は条件を満たさない
         if (c == 4 || c == 9) {
           j_ = 1;
         }

         // N未満(1)か否(0)かのチェック -----
         // k が N 未満か確定していないときは
         // 見ている桁の値(c_)が c 未満だと確定できない
         // 見ている桁の値(c_)が c を超えると N 未満が確定する
         if (c_ < c) {
           k_ = 0;
         } else if (c < c_) {
           k_ = 1;
         }

         // 決めた場所に値を入れる
         dp[i_][j_][k_] += dp[i][j][k];

       }
     }
   }
 }

 long long ans = 0;
 ans = dp[s.size()][1][0] + dp[s.size()][1][1];
 return ans;
}

int main() {

 long long A, B;
 cin >> A >> B;

 cout << count(B) - count(A - 1) << endl;

 return 0;

}
