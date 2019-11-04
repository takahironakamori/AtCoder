#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int even = N / 2;
  int odd = N - even;

  cout << (double)odd / N << endl;

}