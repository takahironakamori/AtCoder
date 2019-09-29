#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A[a - 1] = i + 1;
  }

  for (int i = 0; i < N; i++) {
    cout << A[i];
    if (i != N - 1) {
      cout << " ";
    }
  }

  cout << endl;

}