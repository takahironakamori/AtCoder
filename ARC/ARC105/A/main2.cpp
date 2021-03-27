#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;

  set<int> st;

  for (int i = 0; i < N; ++i) {
    int a;
    cin >> a;
    st.insert(a);
  }

  while (1 < st.size()) {
    int mx = *st.rbegin();
    int mn = *st.begin();
    st.insert(mx - mn);
    st.erase(mx);
  }

  cout << *st.begin() << endl;

  return 0;
}