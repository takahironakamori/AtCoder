#include <bits/stdc++.h>
using namespace std;

int main() {

  long long N;
  cin >> N;

  vector<long long> A(100010);
  long long sum = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A[a]++;
    sum += a;
  }

  long long Q;
  cin >> Q;

  vector<long long> B(Q);
  vector<long long> C(Q);
  for (int i = 0; i < Q; i++) {
    cin >> B[i] >> C[i];
  }

  for (int i = 0; i < Q; i++) {
    sum -= B[i] * A[B[i]];
    sum -= C[i] * A[C[i]];
    A[C[i]] += A[B[i]];
    A[B[i]] = 0;
    sum += C[i] * A[C[i]];
    cout << sum << endl;
  }

  return 0;

}
