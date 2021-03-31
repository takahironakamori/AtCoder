#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  double answer = 0.0;

  for (int i = 1; i <= N; i++) {
    int v = i;
    int count = 0;
    while (v < K) {
      v *= 2;
      count++;
    }
    answer += pow(0.5, count) / N;
  }
  
  cout << setprecision(15) << answer << endl;

}