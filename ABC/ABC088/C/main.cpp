#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<vector<int>> c(3,vector<int>(3));

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> c[i][j];
    }
  }

  vector<int> a(3);
  vector<int> b(3);

  a[0] = 0;
  b[0] = c[0][0];
  b[1] = c[0][1];
  b[2] = c[0][2];
  a[1] = c[1][0] - b[0];
  a[2] = c[2][0] - b[0];

  string answer = "Yes";

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (c[i][j] != a[i] + b[j]) {
        answer = "No";
      }
    }
  }

  cout << answer << endl;

}