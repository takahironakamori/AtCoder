#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  long long K;
  cin >> S >> K;

  int answer = 1;

  for (int i = 0; i < min(K,(long long)S.size()); i++) {
    if ((S[i] - '0') != 1) {
      answer = S[i] - '0';
      break;
    }
  }

  cout << answer << endl;

  return 0;

}
