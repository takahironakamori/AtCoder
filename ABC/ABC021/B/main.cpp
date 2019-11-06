#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, a, b, K;
  cin >> N >> a >> b >> K;

  vector<int> n(N);
  
  n[a - 1]++;
  n[b - 1]++;
  
  for (int i = 0; i < K; i++) {
    int n_;
    cin >> n_;
    n[n_ - 1]++;
  }

  string result = "YES";

  for (int i = 0; i < N; i++) {
    if (1 < n[i]) {
      result = "NO";
      break;
    }
  }
  
  cout << result << endl;

}