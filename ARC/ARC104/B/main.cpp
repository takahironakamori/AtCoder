#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;

  string S;
  cin >> S;

  map<char, long long> count;
  long long ans = 0;

  for (int i = 0; i < N; ++i) {
    count.clear();
    for (int j = i; j < N; ++j) {
      count[S[j]]++;
      if (count['A'] == count['T'] && count['C'] == count['G']) {
        ans++;
      }
    }    
  }

  cout << ans << endl;

  return 0;

}