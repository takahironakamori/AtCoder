#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  int answer = 0;

  for (int i = 0; i < s.size() / 2; i++)  {

    if (s[i] != s[s.size() - 1 - i]) {
      answer++;
    }

  }

  cout << answer << endl;

}