#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C;
  cin >> A >> B >> C;

  int answer = 0;

  answer += A * B * 2;
  answer += B * C * 2;
  answer += C * A * 2;

  cout << answer << endl;

}