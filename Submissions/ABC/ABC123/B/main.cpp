#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<pair<int, int>> time(5);

  for (int i = 0; i < 5; i++) {
    int a;
    cin >> a;
    int b = 10 - a % 10;
    if (b == 10) {
      b = 0;
    }
    time[i] = make_pair(b, a);
  }

  sort(time.begin(), time.end());

  int answer = 0;
  
  for (int i = 0; i < 5; i++) {
    if (i != 4) {
      answer += time[i].second;
      answer += time[i].first;
    } else {
      answer += time[i].second;
    } 
  }

  cout << answer << endl;

}