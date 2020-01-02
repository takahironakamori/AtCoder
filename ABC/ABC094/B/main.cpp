#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M, X;
  cin >> N >> M >> X;

  int cost1 = 0;
  int cost2 = 0;
  
  for (int i = 0; i < M; i++) {
    int A;
    cin >> A;
    if (A < X) {
      cost1++;
    } else {
      cost2++;
    }
  }

  cout << min(cost1, cost2) << endl;

}