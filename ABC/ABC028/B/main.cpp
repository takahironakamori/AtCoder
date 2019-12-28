#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  vector<int> count(6);

  for (int i = 0; i < S.size(); i++) {
    if (S[i] == 'A') {
      count[0]++;
    } else if (S[i] == 'B') {
      count[1]++;
    } else if (S[i] == 'C') {
      count[2]++;
    } else if (S[i] == 'D') {
      count[3]++;
    } else if (S[i] == 'E') {
      count[4]++;
    } else {
      count[5]++;
    }
  }

  for (int i = 0; i < 6; i++) {
    if (i == 5) {
      cout << count[i] << endl;
    } else {
      cout << count[i] << " ";
    }
  }
 
}