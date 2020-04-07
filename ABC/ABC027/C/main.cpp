#include <bits/stdc++.h>
using namespace std;

int main() {

  long long N;
  cin >> N;

  int depth = 0;

  for (long long i = N; 0 < i; i /= 2) {
    depth++;
  }

  long long x = 1;

  string current = "T";

  if (depth % 2 == 1) {
    while (x <= N) {
      if (current == "T") {
        x = x * 2 + 1;
        current = "A";
      } else {
        x = x * 2;
        current = "T";
      }
    }
  } else {
    while (x <= N) {
      if (current == "T") {
        x = x * 2;
        current = "A";
      } else {
        x = x * 2 + 1;
        current = "T";
      }
    }
  }

  if (current == "T") {
    cout << "Takahashi" << endl;
  } else {
    cout << "Aoki" << endl;
  }

  return 0;

}
