#include <bits/stdc++.h>
using namespace std;

long long dfs (string s, int count) {

  if (count == s.size() - 1) {

    vector<string> s_(s.size());
    int current = 0;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] != '+') {
        s_[current] += s[i];
      } else {
        current++;
      }
    }

    long long result_ = 0;

    for (int i = 0; i < s_.size(); i++) {
      result_ += atoll(s_[i].c_str());
    }

    return result_;

  }

  long long result = 0;

  // +を入れない
  result += dfs(s, count + 1);

  // +を入れる
  s = s.substr(0, count + 1) + "+" + s.substr(count + 1);

  result += dfs(s, count + 2);

  return result;

}

int main() {

  string S;
  cin >> S;

  cout << dfs(S, 0) << endl;

  return 0;

}
