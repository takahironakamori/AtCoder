#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  string s;
  cin >> s;
 
  for (int i = 0; i < s.size(); i++) {
    int c = (int) s[i];
    if (i == 0) {
      if ((97 <= c) && (c <= 122)) {
        cout << char(c - 32);
      } else {
        cout << s[i];
      }
    } else {
      if ((65 <= c) && (c <= 90)) {
        cout << char(c + 32);
      } else {
        cout << s[i];
      }
    }
  }
  
  cout << endl;
 
}