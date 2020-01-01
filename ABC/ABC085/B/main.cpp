#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  set<int> d;

  for (int i = 0; i < N; i++) {
    int d_;
    cin >> d_;
    d.insert(d_);
  }

  cout << d.size() << endl;

}