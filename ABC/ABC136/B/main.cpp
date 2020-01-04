#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  
  int answer = 0;

  for (int i = 1; i <= N; i++) {
    if (i <= 9) {
      answer++;
    } else if (100 <= i && i <= 999) {
      answer++;
    } else if (10000 <= i && i <= 99999) {
      answer++;
    }
  }

  cout << answer << endl;

}