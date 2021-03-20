#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  double ans = 0;

  for (int i = 1; i < N; ++i) {
    ans += (double) N / (N - i);
  }
  
  printf("%.16f", ans);
  printf("\n");

  return 0;

}