#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> A(6);

  for (int i = 0; i < 6; i++) {
    cin >> A[i];
  }

  sort(A.begin(), A.end(), greater<int>());

  cout << A[2] << endl;

  return 0;

}