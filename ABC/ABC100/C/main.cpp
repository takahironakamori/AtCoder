#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int count = 0;

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    int count_ = 0;
    while (a % 2 == 0) {
      a /= 2;
      count_++;
    }
    count += count_;
  }

  cout << count << endl;

}