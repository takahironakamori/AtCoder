#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, Q;
  cin >> N >> Q;

  vector<int> a(N);

  for (int i = 0; i < Q; i++) {
    
    int L, R, T; 
    cin >> L >> R >> T;
    
    for (int j = 0; j < N; j++) {
      if (L - 1 <= j && j <= R - 1) {
        a[j] = T;
      }
    }

  }

  for (int i = 0; i < N; i++) {
    cout << a[i] << endl;
  }

}