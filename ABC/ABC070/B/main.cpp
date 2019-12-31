#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int answer = min(D,B) - max(A,C);

  cout << max(0, answer) << endl;

}