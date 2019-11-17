#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int count = 0;
  int sum = 0;

  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    if (A != 0) {
      count++;
      sum += A;
    }
  }

  cout << ceil((double) sum / count) << endl;

}