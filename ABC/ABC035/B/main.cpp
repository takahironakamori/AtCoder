#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  int T;
  cin >> T;

  vector<int> v(5);
  for (int i = 0; i < S.size(); i++) {

    switch(S[i]) {
      case 'L':
        v[0]++;
        break;
      case 'R':
        v[1]++;
        break;
      case 'U':
        v[2]++;
        break;
      case 'D':
        v[3]++;
        break;
      case '?':
        v[4]++;
        break;
    }

  }

  int x = v[1] - v[0];
  int y = v[2] - v[3];

  int answer;
  if (T == 1) {  
    answer = abs(x) + abs(y) + v[4];
  } else {
    int c = abs(x) + abs(y);
    if (v[4] < c) {
      answer = c - v[4];
    } else {
      answer = (v[4] - c) % 2;
    }
  }

  cout << answer << endl;

}