#include <bits/stdc++.h>
using namespace std;


int main() {

  int N, K;
  cin >> N >> K;

  vector<vector<int>> time(N, vector<int>(N));
  for(int i = 0; i < N; ++i) {
    for(int j = 0; j < N; ++j) {
      cin >> time[i][j];
    }
  }

  int ans = 0;

  vector<int> v;
  
  for (int i = 1; i < N; ++i) {
    v.push_back(i+1);
  }

  // 順列を生成
  do {
    int start = 0;
    int sum = 0;
    int to = 0;
    for(int i = 0; i < N-1; ++i) {
      to = v[i] - 1;
      sum += time[start][to];
      start = to;
    }
    sum += time[to][0];
    if (sum == K) {
      ans++;
    }  
  } while (next_permutation(v.begin(), v.end()));    

  cout << ans << endl;

  return 0;

}