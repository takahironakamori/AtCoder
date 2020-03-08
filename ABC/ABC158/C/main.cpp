#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B;
  cin >> A >> B;

  int answer = -1;

  for (int i = 1; i < 1010; i++){
    int a_ = floor((double) i / 100 * 8);
    int b_ = i / 10;
    if (A == a_ && B == b_){
      answer = i;
      break;
    }
  }

  cout << answer << endl;

  return 0;

}
