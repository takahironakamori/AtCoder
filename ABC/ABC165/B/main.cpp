#include <bits/stdc++.h>
using namespace std;

int main() {

  long long X;
  cin >> X;

  long long V = 100;
  long long answer = 0;

  while (V < X) {
    V += V / 100;
    answer++;
  }

  cout << answer << endl;

  return 0;
}
