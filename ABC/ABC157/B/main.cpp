#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<vector<int>> A(3, vector<int>(3));
  vector<vector<bool>> check(3, vector<bool>(3));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> A[i][j];
    }
  }

  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int b;
    cin >> b;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (A[i][j] == b){
          check[i][j] = true;
        }
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    if (check[i][0] && check[i][1] && check[i][2]) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  for (int i = 0; i < 3; i++) {
    if (check[0][i] && check[1][i] && check[2][i]){
      cout << "Yes" << endl;
      return 0;
    }
  }

  if (check[0][0] == true && check[1][1] == true && check[2][2] == true) {
    cout << "Yes" << endl;
    return 0;
  }

  if (check[0][2] == true && check[1][1] == true && check[2][0] == true) {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;

  return 0;

}
