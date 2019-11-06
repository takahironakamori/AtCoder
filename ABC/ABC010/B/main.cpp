#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int answer = 0;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a < 3) {
      answer += a - 1; 
    } else if (a < 7) {
      answer += a - 3;
    } else if (a < 9) {
      answer += a - 7;
    }
  }

  cout << answer << endl;

}