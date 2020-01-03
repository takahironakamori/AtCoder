#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  double answer = 0.0;

  for (int i = 0; i < N; i++) {
    double x;
    cin >> x;
    string u;
    cin >> u;
    if (u == "BTC") {
      answer += (double) 380000 * x;
    } else {
      answer += (double) x;
    }
  }

  cout << setprecision(20) << answer << endl;

}