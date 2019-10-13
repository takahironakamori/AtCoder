#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  int p = 0;
  
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'p') {
      p++;
    }
  }

  cout << s.size() / 2 - p << endl;

}