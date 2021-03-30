#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int T;
  cin >> T;

  while (0 < T) {

    long long N;
    cin >> N;

    if (N % 4 == 0) {
      cout << "Even" << endl;
    } else if (N % 2 == 0) {
      cout << "Same" << endl;
    } else {
      cout << "Odd" << endl;
    }

    T--;
    
  }

  return 0;

}