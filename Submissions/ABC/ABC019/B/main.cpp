#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  char current = s[0];
  int count = 0;

  cout << current;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == current) {
      count++;
    } else {
      cout << count;
      current = s[i];
      count = 1;
      cout << current;
    }
  }

  cout << count << endl;

}