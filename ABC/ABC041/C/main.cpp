#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<pair<int, int>> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i].first;
    a[i].second = i + 1;
  }

  sort(a.rbegin(), a.rend());

  for (int i = 0; i < N; i++) {
    cout << a[i].second << endl;
  }

}