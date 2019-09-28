#include <bits/stdc++.h>
using namespace std;

int main() {

  long N, K;
  cin >> N >> K;

  long count = (N - K) * (K - 1) * 6.0 + (N - 1) * 3.0 + 1;

  double all = pow(N, 3.0);
  
  double ans = double(count) / all;

  cout << setprecision(11) << ans << endl;

}