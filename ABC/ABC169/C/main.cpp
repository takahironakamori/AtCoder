#include <bits/stdc++.h>
using namespace std;

int main() {

  long long A;
  double B;
  cin >> A >> B;

  int B2 = round(B * 100);

  long long ans = A * B2 / 100;

  cout << ans << endl;

}
