#include <bits/stdc++.h>
using namespace std;

int main() {

  int H, N;
  cin >> H >> N;

  int sum = 0;
  for (int i = 0; i < N; i++) {
    int a_;
    cin >> a_;
    sum += a_;
  }

  if (H <= sum) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}
