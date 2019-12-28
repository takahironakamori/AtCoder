#include <bits/stdc++.h>
using namespace std;

int main() {

  string w;
  cin >> w;

  vector<int> count(26);
  
  for (int i = 0; i < w.size(); i++) {
    count[w[i] - 'a']++;
  }

  string answer = "Yes";

  for (int i = 0; i < 26; i++) {
    if (count[i] % 2 == 1) {
      answer = "No";
      break;
    }
  }

  cout << answer << endl;

}