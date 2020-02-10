#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  set<int> st;
  for (int i = 0; i < N; i++) {
    int a_;
    cin >> a_;
    st.insert(a_);
  }

  if (st.size() == N) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;

}
