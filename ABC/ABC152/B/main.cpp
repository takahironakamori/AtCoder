#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int a, b;
  cin >> a >> b;

  string A_ = to_string(a);
  string B_ = to_string(b);
  
  string A = "";
  for (int i = 0; i < b; i++) {
    A += A_;
  }

  string B = "";
  for (int i = 0; i < a; i++) {
    B += B_;
  }

  if (A < B) {
    cout << A << endl;
  } else {
    cout << B << endl;
  }

}