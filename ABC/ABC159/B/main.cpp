#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  int N = S.size();

  string S1 = S;
  reverse(S1.begin(), S1.end());

  string S2 = S.substr(0, (N - 1) / 2);
  string S3 = S2;
  reverse(S3.begin(), S3.end());

  string S4 = S.substr((N + 3 - 1) / 2, N);
  string S5 = S4;
  reverse(S5.begin(), S5.end());

  string answer = "No";

  if (S == S1 && S2 == S3 && S4 == S5) {
    answer = "Yes";
  }

  cout << answer << endl;

  return 0;

}
