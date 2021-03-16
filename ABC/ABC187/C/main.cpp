#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  set<string> st;

  for (int i = 0; i < N; ++i) {
    string S;
    cin >> S;
    st.insert(S);
  }

  for (auto item:st) {
    string S2 = '!' + item;
    if (st.find(S2) != st.end()) {
      cout << item << endl;
      return 0;
    }
  }

  cout << "satisfiable" << endl;

  return 0;

}