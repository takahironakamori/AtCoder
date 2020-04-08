#include <bits/stdc++.h>
using namespace std;

int main() {

  int txa, tya, txb, tyb, T, V, n;
  cin >> txa >> tya >> txb >> tyb >> T >> V >> n;

  vector<int> x(n);
  vector<int> y(n);

  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }

  double distance = 0;
  string answer = "NO";

  for (int i = 0; i < n; i++) {
    distance = sqrt((txa - x[i]) * (txa - x[i]) + (tya - y[i]) * (tya - y[i]));
    distance += sqrt((x[i] - txb) * (x[i] - txb) + (y[i] - tyb) * (y[i] - tyb));
    if (distance <= T * V) {
      answer = "YES";
      break;
    }
  }

  cout << answer << endl;

  return 0;

}
