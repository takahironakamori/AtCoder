#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  // 2個を何通り作れるか
  map<int, long long> count;
  map<int, long long> count2;
  for (int i = 0; i < N; i++) {
    count2[A[i]]++;
    if (2 <= count2[A[i]]) {
      count[A[i]] = count2[A[i]] * (count2[A[i]] - 1) / 2;
    }
  }

  // 2個を何通り作れるかの合計
  long long counts = 0;
  for (auto item:count) {
    counts += item.second;
  }

  for (int i = 0; i < N; i++) {

    if (count2[A[i]] == 1) {
      cout << counts << endl;
    } else {
      long long c_ = counts;
      cout << counts - (count2[A[i]] - 1) << endl;
    }

  }

  return 0;

}
