#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  string s = to_string(N);

  int sn = 0;
  for (int i = 0; i < s.size(); i++) {
    sn += s[i] - '0';
  }

  if (N % sn == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}