#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, X;
  cin >> N >> X;

  int sum = 0;
  vector<int> m(N);

  for (int i = 0; i < N; i++) {
    cin >> m[i];
    sum += m[i];
  }

  sort(m.begin(), m.end());

  X -= sum;

  cout << X / m[0] + N << endl;

}