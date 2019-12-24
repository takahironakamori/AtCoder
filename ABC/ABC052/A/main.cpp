#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  
  if (C * D < A * B) {
    cout << A * B << endl;
  } else {
    cout << C * D << endl;
  }

}