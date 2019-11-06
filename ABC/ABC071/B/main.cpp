#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  vector<int> s(26);

  for (int i = 0; i < S.size(); i++) {
    s[(int) S.at(i) - 97]++;
  }

  string result = "";
  
  for (int i = 0; i < 26; i++) {
    if (s[i] == 0) {
      result += char(i+97);
      break;
    }
  }

  if (result == "") {
    cout << "None" << endl;
  } else {
    cout << result << endl;
  }

}