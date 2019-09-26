#include <bits/stdc++.h>
using namespace std;

int main() {

  long N;
  cin >> N;

  vector<int> a(N);

  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  map<int, int> m;

  for (int i = 0; i < N; i++) {
    m[a[i]] = 0;
  }

  int j = 0;

  for (auto x: m) {
    m[x.first] = j;
    j++;
  }

  for (int i = 0; i < N; i++){
		cout << m[a[i]] << endl;
	}

}