#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  double answer = 0;
  for (int i = 1; i <= N; i++) {
    answer += (double) 10000 * i / N;
  }

  cout << answer << endl;

}