#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  long result = 1;

  int mod = 1000000007;

  for (int i = 1; i <= N; i++) {
    result = (result * i) % mod;
  }

  cout << result << endl;

}