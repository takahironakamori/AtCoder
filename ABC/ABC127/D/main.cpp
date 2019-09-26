#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  priority_queue<pair<int, int>> v;

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    v.push({a, 1});    
  }

  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    v.push({b, a});
  }

  long count = 0;

  for (int i = 0; i < N; i++) {

    pair<int, int> p = v.top();
    v.pop();
    count += p.first;

    if (1 < p.second) {
      p.second--;
      v.push(p);
    }
    
  }
  
  cout << count << endl;

}