#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> R(N);
  for (int i = 0; i < N; i++) {
    cin >> R[i];
  }

  sort(R.begin(), R.end(), std::greater<int>());

  double red = 0;

  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      red += pow(R[i], 2);
    } else {
      red -= pow(R[i], 2);
    }
  }
  
  cout << setprecision(16) << red * M_PI << endl;

}