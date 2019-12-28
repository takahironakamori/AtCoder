#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  int k;
  cin >> k;

  if (k <= s.size()) {
    
    set<string> st;

    for (int i = 0; i <= s.size() - k; i++) {
      string s_ = s.substr(i, k);
      st.insert(s_);
    }

    cout << st.size() << endl;

  } else {
    cout << 0 << endl;
  }

}