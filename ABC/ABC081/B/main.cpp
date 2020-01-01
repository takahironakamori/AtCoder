#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  bool flg = true;
  int answer = 0;

  while (flg) {
    for (int i = 0; i < N; i++) {
      if (A[i] % 2 != 0) {
        flg = false;
        break;
      }
      A[i] /= 2; 
    }
    if (flg) {
      answer++;
    }
  }
  
  cout << answer << endl;

}