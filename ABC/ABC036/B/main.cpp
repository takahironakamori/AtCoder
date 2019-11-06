#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<string> s(N);
  for (int i = 0; i < N; i++) {
    cin >> s[i];
  }

  for (int j = 0; j < N; j++) {
    for (int i = N - 1; 0 <= i; i--) {  
      cout << s[i][j];
    }
    cout << endl;
  }

}