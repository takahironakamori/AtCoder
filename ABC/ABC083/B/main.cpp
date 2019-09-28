#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, A, B;
  cin >> N >> A >> B;

  int r = 0;

  for (int i = 1; i <= N; i++) {

    int v = i;
    int sum = 0;

    if (10000 <= v) {
      sum += v / 10000;
      v = v % 10000;
    }

    if (1000 <= v) {
      sum += v / 1000;
      v = v % 1000;
    }

    if (100 <= v) {
      sum += v / 100;
      v = v % 100;
    }

    if (10 <= v) {
      sum += v / 10;
      v = v % 10;
    }

    sum += v;

    if (A <= sum && sum <= B) {
      r += i;
    }

  }

  cout << r << endl;

}