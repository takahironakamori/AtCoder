#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C;
  cin >> A >> B >> C;

  int answer = 0;

  if (A < B) {
    answer = C / A;
  } else {
    answer = C / B;
  }

  cout << answer << endl;

}