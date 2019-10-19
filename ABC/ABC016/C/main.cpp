#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;
  
  vector<set<int>> data(N);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    data[a-1].insert(b-1);
    data[b-1].insert(a-1);
  }

  for (int i = 0; i < N; i++) {
    set<int> answer;
    for (auto f : data[i]) {
      for (auto ff: data[f]) {
        if (ff != i && data[i].find(ff) == data[i].end()) {
          answer.insert(ff);
        }
      }
    }
    cout << answer.size() << endl;
  }
  
}