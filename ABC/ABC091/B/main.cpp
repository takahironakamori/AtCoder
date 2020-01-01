#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  map<string, int> mp;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }

  int M;
  cin >> M;

  for (int i = 0; i < M; i++) {
    string t;
    cin >> t;
    mp[t]--;
  }

  int answer = 0;

  for (auto item:mp) {
    answer = max(answer, item.second);
  }

  cout << answer << endl;

}