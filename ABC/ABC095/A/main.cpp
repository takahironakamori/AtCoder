#include <bits/stdc++.h>
using namespace std;

int main() {
 
  string S;
  cin >> S;

  int count = 0;

  for (int i = 0; i < 3; i++) {
    if (S[i] == 'o') {
      count++;
    }
  }

  cout << 700 + count * 100 << endl;

}