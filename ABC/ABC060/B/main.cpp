#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C;
  cin >> A >> B >> C;

  string answer = "NO";

  for (int i = 1; i <= A; i++) {
    int v = B * i + C;
    if (v % A == 0) {
      answer = "YES";
      break;
    }
  }
  
  cout << answer << endl;

}