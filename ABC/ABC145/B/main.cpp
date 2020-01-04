#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  string S;
  cin >> S;

  if (S.substr(0, N / 2) == S.substr(N / 2)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}