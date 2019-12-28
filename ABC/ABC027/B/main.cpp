#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int sum = 0;
  vector<int> a(N);

  for (int i = 0; i < N; i++) {
    cin >> a[i];
    sum += a[i];
  }

  int average = sum / N;
  int current = 0;
  int answer = 0;

  if (sum % N != 0) {
    answer = -1;
  } else {
    for (int i = 0; i < N; i++) {
      current += a[i];
      if ((i + 1) * average != current) {
        answer++;
      }
    }
  }

  cout << answer << endl;
 
}