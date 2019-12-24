#include <bits/stdc++.h>
using namespace std;

int main() {
 
  string N;
  cin >> N;

  set<char> st1;
  set<char> st2;

  st1.insert(N[0]);
  st1.insert(N[1]);
  st1.insert(N[2]);

  st2.insert(N[1]);
  st2.insert(N[2]);
  st2.insert(N[3]);

  if (st1.size() == 1 || st2.size() == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}