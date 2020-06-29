#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int sum = 0;

  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    sum += a * b;
  }

  cout << floor((double) sum * 1.05) << endl;
  return 0;

}
