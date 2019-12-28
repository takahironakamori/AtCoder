#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  string S;
  cin >> S;

  int N;
  cin >> N;
  
  for (int i = 0; i < N; i++) {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    string answer1 = "";
    string answer2 = "";
    string answer3 = "";
    for (int j = 0; j < S.size(); j++) {
      if (j < l) {
        answer1 += S[j]; 
      } else if (l <= j && j <= r) {
        answer2 += S[j];
      } else {
        answer3 += S[j];
      }
    }
    reverse(answer2.begin(), answer2.end());
    S = answer1 + answer2 + answer3;
  }

  cout << S << endl;
 
}