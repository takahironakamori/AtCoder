#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(100100);
  for (int i = 0; i < N; i++) {
    int i_;
    cin >> i_;
    A[i_]++;
  }

  int count = 0;

  for (int i = 0; i < 100100; i++) {
    if (1 < A[i]) {
      count += A[i] - 1;
    }
  }
  
  cout << count << endl;

}