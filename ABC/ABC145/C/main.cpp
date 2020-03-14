#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> x(N);
  vector<int> y(N);
  vector<int> v(N);
  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
    v[i] = i;
  }

  double distance = 0.0;
  int count = 0;

  // 1,2,3 の順列を生成し、出力する
  do {
    count++;
    double d = 0.0;
    for(int i = 0; i < N - 1; i++) {
      int dx = x[v[i]] - x[v[i + 1]];
      int dy = y[v[i]] - y[v[i + 1]];
      d += pow(dx * dx + dy * dy, 0.5);
    }
    distance += d;
  } while (next_permutation(v.begin(), v.end()));

  cout << setprecision(14) << distance / count << endl;

  return 0;

}
