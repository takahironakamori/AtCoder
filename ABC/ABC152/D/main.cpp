#include <bits/stdc++.h>
using namespace std;

pair<int, int> makePair(int x) {
  int a = 0;
  int b = x % 10;
  while (x) {
    a = x;
    x /= 10;
  }
  return make_pair(a, b);
}

int main() {
 
  int n;
  cin >> n;

  // i = 1234 の場合、
  // pair(1, 4) にして、
  // map[pair(1,4)]に 1 加える
  map<pair<int,int>, int> mp;
  for (int i = 1; i <= n; i++) {
    pair<int, int> p = makePair(i);
    mp[p]++;
  }

  int answer = 0;

  // i = 1234の場合、
  // pair(4,1)にして、
  // 答えに map[pair(4,1)] の値を加える
  for (int i = 1; i <= n; i++) {
    pair<int, int> p = makePair(i);
    pair<int, int> q = make_pair(p.second, p.first);
    answer += mp[q];
  }

  cout << answer << endl;

}