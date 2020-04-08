#include <bits/stdc++.h>
using namespace std;

int f(string S, string ans, string s, char s_) {

  int result = 0;

  // 並べ替え前で使っていないアルファベットの数
  vector<int> startAlphabet(26);

  for (int i = ans.size() + 1; i < S.size(); i++) {
    startAlphabet[(int) S[i] - 'a']++;
  }

  // 並べ替え後の使っていないアルファベットの数
  vector<int> unusedAlphabet(26);

  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '-') {
      unusedAlphabet[(int) s[i] - 'a']++;
    }
  }

  // すでに移動させた回数
  for (int i = 0; i < ans.size(); i++) {
    if (S[i] == ans[i]) {
      result++;
    }
  }

  // 文字列
  char l = S[ans.size()];
  if (l == s_) {
    result++;
  }

  for (int i = 0; i < 26; i++) {
    result += min(startAlphabet[i], unusedAlphabet[i]);
  }

  return result;

}

int main() {

  int N, K;
  string S;
  cin >> N >> K >> S;

  string answer = "";

  string s = S;

  sort(s.begin(), s.end());

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (s[j] != '-') {
        char s_ = s[j];
        s[j] = '-';
        int count = f(S, answer, s, s_);
        if (N - count <= K) {
          answer += s_;
          break;
        } else {
          s[j] = s_;
        }
      }
    }
  }

  cout << answer << endl;

  return 0;

}
