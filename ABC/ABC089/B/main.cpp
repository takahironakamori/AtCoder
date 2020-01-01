#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  set<string> S;

  for (int i = 0; i < N; i++) {
    string S_;
    cin >> S_;
    S.insert(S_);
  }

  if (S.size() == 3) {
    cout << "Three" << endl;
  } else {
    cout << "Four" << endl;
  }

}