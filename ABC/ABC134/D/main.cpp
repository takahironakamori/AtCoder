#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> a(N+1);

  for (int i = 1; i < N+1; i++) {
    cin >> a[i];
  }

  vector<int> b(N+1);
  
  for (int i = N; 1 <= i; i--) {
    int count = 0;
    for (int j = i; j <= N; j += i) {
      if (b[j] == 1) {
        count++;
      }
    }
    if (count % 2 == a[i]) {
      b[i] = 0;
    } else {
      b[i] = 1;
    }
  }

  vector<int> result;
  for (int i = 1; i < N+1; i++) {
    if (b[i] == 1) {
      result.push_back(i);
    }
  }

  cout << result.size() << endl;

  for (int i = 0; i < result.size(); i++) {
    cout << result[i];
    if (i != N) {
      cout << " ";
    }
  }

  cout << endl;

}