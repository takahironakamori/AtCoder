#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  map<string, int> mp;
  
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    if (mp.count(S) == 0) {
      mp[S] = 1;
    } else {
      mp[S]++;
    }
  }

  string name = "";
  int value = 0;

  for (auto item:mp) {
    if (value < item.second) {
      name = item.first;
      value = item.second;
    }
  }

  cout << name << endl;

}