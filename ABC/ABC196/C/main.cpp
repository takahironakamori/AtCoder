#include <bits/stdc++.h>
using namespace std;

long long change(long long v) {
  string s = to_string(v);
  return stoll(s + s);
}


int main() {

  long long N;
  cin >> N;

  long long current = 1;

  while (change(current) <= N) {
    current++;
  }

  long long ans = current - 1;

  cout << ans << endl;

  return 0;

}