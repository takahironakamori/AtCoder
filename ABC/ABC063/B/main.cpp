#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  vector<int> count(26);
  for (int i = 0; i < s.size(); i++) {
    count[s[i] - 'a']++;
  }

  string answer = "yes";

  for (int i = 0; i < 26; i++) {
    if (1 < count[i]){
      answer = "no";
      break;
    } 
  }

  cout << answer << endl;

}