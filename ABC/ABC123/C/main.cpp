#include <bits/stdc++.h>
using namespace std;


int main() {

  long long N, A, B, C, D, E;
  cin >> N >> A >> B >> C >> D >> E;

  long long min_ = A;

  min_ = min(min_, B);
  min_ = min(min_, C);
  min_ = min(min_, D);
  min_ = min(min_, E);

  long long answer = ceil((double) (N - min_) / min_) + 5;

  cout << answer << endl;

  return 0;

}
