#include <bits/stdc++.h>
using namespace std;

int main() {

  long long N;
  cin >> N;

  vector<int> v;
  while (26 <= N) {
    if ((N % 26) == 0) {
      v.push_back(26);
      N /= 26;
      N--;
    } else {
      v.push_back(N % 26);
      N /= 26;
    }

  }

  if (N != 0) {
    v.push_back(N);
  }

  for (int i = v.size() - 1; 0 <= i; i--) {
    cout << char(v[i]+96);
  }

  cout << endl;

  return 0;

}
