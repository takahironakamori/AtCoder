#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, D, X;
  cin >> N >> D >> X;

  int answer = 0;
  for (int i = 0; i < N; i++) {
    
    int A;
    cin >> A;
    
    int current = 0;
    int count = 0;
    bool flg = true;

    while (flg) {
      current = A * count + 1;
      if (D < current) {
        flg = false;
      } else {
        count++;
      }
    }

    answer += count;
  
  }

  cout << answer + X << endl;

}