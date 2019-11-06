#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  set<int, greater<int>> st;

  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    st.insert(A);
  }

  int current = 1;
  
  for(auto x : st) {
    if (current == 2) {
      cout << x << endl;
      break;
    }
    current++;
  }

}
