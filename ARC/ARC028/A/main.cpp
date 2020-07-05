#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, A, B;
  cin >> N >> A >> B;

  int count = 0;
  while (0 < N) {
    if (count % 2 == 0) {
      N -= min(N, A);
    } else {
      N -= min(N, B);
    }
    count++;
  }

  if (count % 2 == 0) {
    cout << "Bug" << endl;
  } else {
    cout << "Ant" << endl;
  }

  return 0;

}
