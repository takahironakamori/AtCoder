#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  int A, B, C, D;
  cin >> A >> B >> C >> D;

  for (int i = 0; i < A; i++) {
    cout << S[i];
  }

  cout << "\"";

  for (int i = A; i < B; i++) {
    cout << S[i];
  }

  cout << "\"";

  for (int i = B; i < C; i++) {
    cout << S[i];
  }

  cout << "\"";

  for (int i = C; i < D; i++) {
    cout << S[i];
  }

  cout << "\"";

  for (int i = D; i < (int) S.size(); i++) {
    cout << S[i];
  }

  cout << endl;
  return 0;

}
