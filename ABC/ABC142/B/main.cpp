#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<int> h(N);

  for (int i = 0; i < N; i++) {
    cin >> h[i];
  }

  int count = 0;

  for (int i = 0; i < N; i++) {
    if (K <= h[i]) {
      count++;
    }
  }

  cout << count << endl;

}