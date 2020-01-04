#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    int c = (int) s[i];
    if (c + n <= 90) {
      cout << char((int) s[i] + n);
    } else {
      c = 65 + c + n - 91;
      cout << char(c);
    }
    
  }

  cout << endl;

}