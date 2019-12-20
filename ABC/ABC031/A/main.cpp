#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, D;
  cin >> A >> D;

  int answer = max((A + 1) * D, A * (D + 1));

  cout << answer << endl;

}