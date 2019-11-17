#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, X;
  cin >> n >> X;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int answer = 0;

  for (int i = 0; i < n; i++) {
    if ((X & (1 << i)) != 0) {
      answer += a[i];
    }
  }

  cout << answer<< endl; 

}