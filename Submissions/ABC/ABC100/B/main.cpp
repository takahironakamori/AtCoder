#include <bits/stdc++.h>
using namespace std;

int main() {

  int D, N;
  cin >> D >> N;

  if (N != 100) {
    cout << (int) pow(100, D) * N << endl;
  } else {
    cout << (int) pow(100, D) * (N + 1) << endl;
  }
  
}