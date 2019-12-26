#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  vector<int> T(3);
  cin >> T[0] >> T[1] >> T[2];

  sort(T.begin(), T.end());

  cout << T[0] + T[1] << endl;

}