#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, Y;
  cin >> N >> Y;

  string result = "-1 -1 -1";

  for (int i = 0; i <= N; i++) {

    for (int j = 0; j <= N - i; j++) {

      int k = N - i - j;
      int sum = i * 10000 + j * 5000 + k * 1000;
      if (sum == Y) {
        result = to_string(i) + " " + to_string(j) + " " + to_string(k);
        break;
      }

    }

  }

  cout << result << endl;

}