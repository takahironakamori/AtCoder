#include <bits/stdc++.h>
using namespace std;

map<int, int> prime_factor(int N) {
  map<int, int> res;
  for (int i = 2; i * i <= N; i++) {
    while (N % i == 0) {
      res[i]++;
      N /= i;
    }
  }
  if (N != 1) {
    res[N] = 1;
  }
  return res;
}

int main() {

  int N;
  cin >> N;

  for (int i = 1; i <= N; ++i) {
    map<int, int> mp = prime_factor(i);
    int sum = 0;
    for (auto item: mp) {
      sum += item.second;
    }
    cout << sum + 1;
    if (i != N) {
      cout << " ";
    }
  }
  cout << endl;

  return 0;
}
