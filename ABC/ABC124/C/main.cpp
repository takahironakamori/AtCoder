#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  string S;
  cin >> S;
  
  // 0101...にした場合
  int count1 = 0;

  // 1010...にした場合
  int count2 = 0;

  for (int i = 0; i < S.size(); i++) {
    if (i % 2 == 0) {
      if (S[i] == '1') {
        count1++;
      } else {
        count2++;
      }
    } else { 
      if (S[i] == '0') {
        count1++;
      } else {
        count2++;
      }
    }
  }

  cout << min(count1, count2) << endl;

}