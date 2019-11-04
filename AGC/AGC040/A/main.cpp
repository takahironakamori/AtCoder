#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  vector<int> l(s.size()+1);
  vector<int> r(s.size()+1);

  int count = 0;

  for (int i = 0; i < s.size(); i++) {
    l[i] = count;
    if (s[i] == '<') {
      count++;
    } else {
      count = 0;
    }
  }
  l[s.size()] = count;

  count = 0;

  for (int i = s.size(); 0 <= i; i--) {
    r[i+1] = count;
    if (s[i] == '>') {
      count++;
    } else {
      count = 0;
    }
  }
  r[0] = count;

  long answer = 0;

  for (int i = 0; i <= s.size(); i++) {
    answer += max(l[i], r[i]);
  }
  
  cout << answer << endl;
  
}
