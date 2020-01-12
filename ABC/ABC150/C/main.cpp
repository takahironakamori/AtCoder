#include <bits/stdc++.h>
using namespace std;

 
int main() {

  int N;
  cin >> N;

  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
  } 

  vector<int> Q(N);
  for (int i = 0; i < N; i++) {
    cin >> Q[i];
  }

  vector<int> v;
  for (int i = 0; i < N; i++) {
    v.push_back(i+1);
  }

  map<vector<int>, int> mp;
  do {
    mp[v] = mp.size();
  } while (next_permutation(v.begin(), v.end()));

  int a = mp[P];
  int b = mp[Q];

  cout << abs(a - b) << endl;

}