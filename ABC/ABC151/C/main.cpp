#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<int> AC(N);
  vector<int> WA(N);

  for(int i = 0; i < M; i++) {
    int p;
    cin >> p;
    string s;
    cin >> s;
    if (s == "AC" && AC[p - 1] == 0) {
      AC[p - 1] = 1;
    } else if (AC[p - 1] == 0) {
      WA[p - 1]++;
    }
  }

  int ac = 0;
  int wa = 0;

  for(int i = 0; i < N; i++) {
    ac += AC[i];
    if (AC[i] == 1) {
      wa += WA[i];
    }
  }

  cout << ac << " " << wa << endl;

}