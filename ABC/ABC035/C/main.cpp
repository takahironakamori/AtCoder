#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, Q;
  cin >> N >> Q;

  vector<int> array(N + 1);

  for (int i = 0; i < Q; i++) {
    int l, r;
    cin >> l >> r;
    array[l-1]++;
    array[r]--;
  }

  for (int i = 1; i < N; i++) {
    array[i] += array[i - 1];
  }

  for (int i = 0; i < N; i++) {
    if (array[i] % 2 == 0) {
      cout << '0';
    } else {
      cout << '1';
    }
  }

  cout << endl;

}