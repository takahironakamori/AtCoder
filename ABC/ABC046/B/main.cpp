#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  cout << K * (long) pow(K - 1, N - 1) << endl;

}