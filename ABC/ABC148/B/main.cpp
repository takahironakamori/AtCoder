#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int N;
  cin >> N;

  string S, T;
  cin >> S >> T;

  string answer = "";

  for (int i = 0; i < N; i++){
    answer += S[i];
    answer += T[i];
  }

  cout << answer << endl;

}