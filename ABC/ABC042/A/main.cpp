#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> count(11);

  int A, B, C;
  cin >> A >> B >> C;
  
  count[A]++;
  count[B]++;
  count[C]++;

  if (count[5] == 2 && count[7] == 1) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}