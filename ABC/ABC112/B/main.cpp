#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, T;
  cin >> N >> T;

  int answer = 0;

  for (int i = 0; i < N; i++) {
    int c, t;
    cin >> c >> t;
    if (t <= T) {
      if (answer == 0){
        answer = c;
      } else {
        answer = min(answer, c);
      }
    }
  }

  if (answer == 0) {
    cout << "TLE" << endl;
  } else {
    cout << answer << endl;
  }
  
}