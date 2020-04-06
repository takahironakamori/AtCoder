#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<pair<int,int>> TA(N);
  for (int i = 0; i < N; i++) {
    cin >> TA[i].first >> TA[i].second;
  }

  long long t = TA[0].first;
  long long a = TA[0].second;

  for (int i = 1; i < N; i++) {
    long long n = max(ceil((double long) t / TA[i].first), ceil((double long) a / TA[i].second));
    t = n * TA[i].first;
    a = n * TA[i].second;
  }

  cout << t + a << endl;

  return 0;

}
