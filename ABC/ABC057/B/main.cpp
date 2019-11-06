#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int N, M;
  cin >> N >> M;

  vector<pair<int, int>> ab(N);
  for (int i = 0; i < N; i++) {
    cin >> ab[i].first >> ab[i].second;
  }

  vector<pair<int, int>> cd(M);
  for (int i = 0; i < M; i++) {
    cin >> cd[i].first >> cd[i].second;
  }

  vector<int> answer(N);

  for (int i = 0; i < N; i++) {
    answer[i] = 0;
    int minD = abs(ab[i].first - cd[0].first) + abs(ab[i].second - cd[0].second);
    for (int j = 1; j < M; j++) {
      int d = abs(ab[i].first - cd[j].first) + abs(ab[i].second - cd[j].second);
      if (d < minD){
        minD = d;
        answer[i] = j;
      }
    }
    cout << answer[i] + 1 << endl;
  }

}