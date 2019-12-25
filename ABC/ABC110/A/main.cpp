#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  vector<int> ABC(3);
  cin >> ABC[0] >> ABC[1] >> ABC[2];

  sort(ABC.begin(), ABC.end());

  cout << ABC[0] + ABC[1] +(ABC[2] * 10) << endl;
 
}