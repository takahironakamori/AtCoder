#include <bits/stdc++.h>
using namespace std;

bool f (string s) {
  bool result = true;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] != s[i+1]) {
      result = false;
      break;
    }
  }
  return result;
}

int main() {

  int N;
  cin >> N;

  int count = 0;
  int current = 1;

  bool flg = true;
  while (flg) {
    if (f(to_string(current))) {
      count++;
      if (count == N) {
        flg = false;
        break;
      }
    }
    current++;
  }

  cout << current << endl;
  return 0;

}
