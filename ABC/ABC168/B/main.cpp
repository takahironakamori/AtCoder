#include <bits/stdc++.h>
using namespace std;

int main() {

  int K;
  cin >> K;

  string S;
  cin >> S;

  if (K < S.size()) {
    cout << S.substr(0,K)  << "..." << endl;
  } else{
    cout << S << endl;
  }

  return 0;

}
