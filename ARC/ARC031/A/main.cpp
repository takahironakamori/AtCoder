#include <bits/stdc++.h>
using namespace std;

int main() {

  string N;
  cin >> N;

  string S = N;
  reverse(S.begin(), S.end());

  if (S == N) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;

}
