#include <bits/stdc++.h>
using namespace std;

long long f(int n, int a) {
  long long x = 1;
  long long y = 1;
  for (int i = 0; i < a; i++) {
    x *= n - i;
    y *= i + 1;
  }
  return x / y;
}

int main() {

  int N;
  cin >> N;

  map<string, int> s;
  for (int i = 0; i < N; i++) {
    string s_;
    cin >> s_;
    sort(s_.begin(), s_.end());
    s[s_]++;
  }

  long long answer = 0;

  for (auto item:s) {
    answer += f(item.second, 2);
  }

  cout << answer << endl;

  return 0;

}
