#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> v(N);
  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  double answer = v[0];

  for (int i = 1; i < N; i++) {
    answer = (answer + v[i]) / 2;
  }

  printf("%.16f", answer);
  printf("\n");

  return 0;

}