#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  map<int, int> mp;
  for (int i = 0; i < N; i++) {
    int a_;
    cin >> a_;
    mp[a_]++;
  }

  int count = 0;

  for (auto item:mp) {
    if (item.first != item.second) {
      if (item.first < item.second) {
        count += item.second - item.first;
      } else {
        count += item.second;
      }
    }
  }

  cout << count << endl;

}