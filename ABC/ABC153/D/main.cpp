#include <bits/stdc++.h>
using namespace std;

int main() {

  long long H;
  cin >> H;

  long long answer = 0;

  long long count = 0;
  while (1 < H) {
    H = H / 2;
    count++;
  }

  while (0 < count) {
    answer += pow(2, count);
    count--;
  }

  cout << answer + 1 << endl;

}
