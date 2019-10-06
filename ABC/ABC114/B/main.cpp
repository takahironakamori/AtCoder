#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;
  
  int ans = 1000;

  for (int i = 0; i < S.size() - 2; i++) {
    int a_ = (S[i] - '0') * 100 + (S[i+1] - '0') * 10 + (S[i+2] - '0');
    ans = min(ans, abs(a_ - 753));
  }
  
  cout << ans << endl;

}