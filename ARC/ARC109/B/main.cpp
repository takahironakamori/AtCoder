#include <bits/stdc++.h>
using namespace std;

int main() {
  
  long long N;
  cin >> N;

  long long start = 0;
  long long end = 2e9;

  while (1 < end - start) {
    long long mid = (start + end) / 2;
    if (mid * (mid + 1) / 2 <= N + 1) {
      start = mid;
    } else {
      end = mid;
    }
  }

  cout << N + 1 - start << endl;

  return 0;

}