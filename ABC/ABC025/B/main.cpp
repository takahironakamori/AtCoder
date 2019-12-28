#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, A, B;
  cin >> N >> A >> B;

  int c = 0;

  for (int i = 0; i < N; i++) {
    
    string s;
    cin >> s;

    int d;
    cin >> d;

    if (s == "East") {
      if (d < A) {
        c += A;
      } else if (A <= d && d <= B) {
        c += d;
      } else {
        c += B;
      }
    } else {
      if (d < A) {
        c -= A;
      } else if (A <= d && d <= B) {
        c -= d;
      } else {
        c -= B;
      }
    }

  }

  if (0 == c) {
    cout << 0 << endl;
  } else if (0 < c) {
    cout << "East" << " " << c << endl;
  } else {
    cout << "West" << " " << abs(c) << endl;
  }
 
}