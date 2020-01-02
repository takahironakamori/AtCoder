#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  string S;
  cin >> S;

  int answer = 0;

  string s1 = "";
  string s2 = "";

  vector<int> count1(26);
  vector<int> count2(26);

  for (int i = 1; i < N; i++) {
    s1 = S.substr(0, i);
    s2 = S.substr(i, N - i);
    count1.clear();
    count1.resize(26);
    count2.clear();
    count2.resize(26);
    int same = 0;
    for (int j = 0; j < s1.size(); j++) {
      count1[(int) s1[j] - 'a']++;
    }
    for (int j = 0; j < s2.size(); j++) {
      count2[(int) s2[j] - 'a']++;
    }
    for (int j = 0; j < 26; j++) {
      if (0 < count1[j] && 0 < count2[j]) {
        same++;
      }
    }
    answer = max(answer, same);
  }

  cout << answer << endl;

}