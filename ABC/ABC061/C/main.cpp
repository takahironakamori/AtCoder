#include <bits/stdc++.h>
using namespace std;

int main() {

  long N, K;
  cin >> N >> K;
  
  vector<long> n(100100);

  for (int i = 0; i < N; i++) {
    int a;
    int b;
    cin >> a >> b;
    n[a] += b;
  }

  for (int i = 1; i < 100100; i++) {
    if (K <= n[i]) {
      cout << i << endl;
      break;
    }
    K -= n[i];
  }

}