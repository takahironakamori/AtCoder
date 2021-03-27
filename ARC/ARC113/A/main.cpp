#include <bits/stdc++.h>
using namespace std;

int main() {

  long long K;
  cin >> K;

  long long ans = 0;

  for (int i = 1; i <= K; ++i) {
    int K2 = K / i;
    for (int j = 1; j <= K2; ++j) {
      int K3 = K2 / j;
      for (int k = 1; k <= K3; ++k) {
        if (i * j * k <= K) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
  
  return 0;

}