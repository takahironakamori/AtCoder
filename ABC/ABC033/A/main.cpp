#include <bits/stdc++.h>
using namespace std;

int main() {

  string N;
  cin >> N;

  set<char> n;
  for (int i = 0; i < 4; i++) {
    n.insert(N[i]);
  }

  if (n.size() == 1) {
    cout << "SAME" << endl;
  } else {
    cout << "DIFFERENT" << endl;
  }

}