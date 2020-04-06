#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  long long answer = 0;

  for (int bits = 1; bits < (1 << S.size()-1); bits++) {

    vector<string> s(S.size());

    int current = 0;

    for (int i = 0; i < S.size(); i++) {
      s[current] += S[i];
      if (bits >> i & 1) {
        current++;
      }
    }

    long long result = 0;

    for (int i = 0; i < s.size(); i++) {
      result += atoi(s[i].c_str());
    }

    answer += result;

  }

  cout << answer + atoll(S.c_str()) << endl;

  return 0;

}
