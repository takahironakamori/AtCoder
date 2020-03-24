#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  map<char, long long> S;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    S[s[0]]++;
  }

  long long answer = 0;

  answer += S['M'] * S['A'] * S['R'];
  answer += S['M'] * S['A'] * S['C'];
  answer += S['M'] * S['A'] * S['H'];
  answer += S['M'] * S['R'] * S['C'];
  answer += S['M'] * S['R'] * S['H'];
  answer += S['M'] * S['C'] * S['H'];
  answer += S['A'] * S['R'] * S['C'];
  answer += S['A'] * S['R'] * S['H'];
  answer += S['A'] * S['C'] * S['H'];
  answer += S['R'] * S['C'] * S['H'];

  cout << answer << endl;

  return 0;

}
