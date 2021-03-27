#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { 
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b); 
}


int main() {
  
  int N;
  cin >> N;

  set<int> st;

  for (int i = 0; i < N; ++i) {
    int a;
    cin >> a;
    st.insert(a);
  }

  int ans = *st.begin();

  for (auto item: st) {
    ans = gcd(ans, item);
  }

  cout << ans << endl;

  return 0;
}