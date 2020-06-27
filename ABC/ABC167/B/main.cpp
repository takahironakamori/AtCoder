#include <bits/stdc++.h>
using namespace std;

int main() {

  long long A, B, C, K;
  cin >> A >> B >> C >> K;

  long long answer = 0;

  answer += min(A, K);
  K = max((long long) 0, K - A);
  K = max((long long) 0, K - B);
  answer -= min(C, K);

  cout << answer << endl;

  return 0;
}
