#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, T, A;
  cin >> N >> T >> A;

  vector<int> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }
  
  double answer = 0;
  double minDiff = 5000000;

  for (int i = 0; i < N; i++) {
    
    double a = T - H[i] * 0.006;
    double diff = abs(A - a);
    
    if (diff < minDiff) {
      answer = i;
      minDiff = diff;
    }
    
  }

  cout << answer+1 << endl;

}