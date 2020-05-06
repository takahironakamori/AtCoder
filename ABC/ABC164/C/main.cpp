#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  set<string> st;
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    st.insert(S);
  }

  cout << st.size() << endl;

  return 0;
}
