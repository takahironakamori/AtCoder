#include <bits/stdc++.h>
using namespace std;

void f(int count, string s) {
  if (count == 0) {
    cout << s << endl;
  } else {
    for (char i = 'a'; i <= 'c'; i++) {
      f(count - 1, s + i);
    }
  }
}

int main() {

  int N;
  cin >> N;

  f(N, "");

  return 0;

}
