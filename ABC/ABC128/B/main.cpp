#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<pair<string, int>> SP(N);
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    int P;
    cin >> P;
    P = 100 - P;
    if (P < 10) {
      SP[i].first = S + "00" + to_string(P);
    } else if(P < 100) {
      SP[i].first = S + "0" + to_string(P);
    } else {
      SP[i].first = S + to_string(P);
    }
    SP[i].second = i + 1;
  }

  sort(SP.begin(), SP.end());

  for (int i = 0; i < N; i++) {
    cout << SP[i].second << endl;
  }

}