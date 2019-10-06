#include <bits/stdc++.h>
using namespace std;

int main() {

  long L, R;
  cin >> L >> R;

  long answer = 2018;

  if (L + 2019 < R) {
    R = L + 2019;
  }

  for (long i = L; i <= R; i++){
    for (long j = i + 1; j <= R; j++) {
      long a_ = (i % 2019) * (j % 2019) % 2019;
      answer = min(answer, a_);
    }
    
  }

  cout << answer << endl;

}