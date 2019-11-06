#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  
  vector<int> a(N + 1);
  for (int i = 2; i < N + 1; i++) {
    cin >> a[i];
  }

  vector<vector<int>> v(N + 1);
  for (int i = 2; i < N + 1; i++) {
    v[a[i]].push_back(i);
  }

  vector<long> salary(N + 1);

  for (int i = N; 0 < i; i--) {
    if (v[i].size() == 0) {
      salary[i] = 1;
    } else if (v[i].size() == 1) {
      salary[i] = salary[v[i][0]] * 2 + 1;
    } else {
      long max_ = salary[v[i][0]];
      long min_ = salary[v[i][0]];
      for (int j = 0; j < v[i].size(); j++) {
        max_ = max(max_, salary[v[i][j]]);
        min_ = min(min_, salary[v[i][j]]);
      }
      salary[i] = max_ + min_ + 1;
    }
  }
  
  cout << salary[1] << endl;

}