#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int answer = 101;

  for (int i = 0; i < N; i++) {
    int T;
    cin >> T;
    answer = min(answer, T);
  }
  
  cout << answer << endl;

}