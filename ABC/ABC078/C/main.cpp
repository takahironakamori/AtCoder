#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  int answer = (1900 * M + 100 * (N - M)) * pow(2, M);

  cout << answer << endl;

  return 0;

}
