#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<string> W(N);
  for (int i = 0; i < N; i++) {
    cin >> W[i];
  }

  string answer = "Yes";
  set<string> st;
  char ls;

  st.insert(W[0]);
  ls = W[0][W[0].size()-1];

  for (int i = 1; i < N; i++) {
    if (st.find(W[i]) == st.end()) {
      if (ls == W[i][0]) {
        st.insert(W[i]);
        ls = W[i][W[i].size()-1];
      } else {
        answer = "No";
        break;
      }
    } else {
      answer = "No";
      break;
    }
  }  

  cout << answer << endl;

}