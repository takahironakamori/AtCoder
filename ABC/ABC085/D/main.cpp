#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, H;
  cin >> N >> H;

  vector<int> a(N);
  vector<int> b(N);

  for (int i = 0; i < N; i++) {
    cin >> a[i] >> b[i];
  }

  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());

  int answer = 0;

  for (int i = 0; i < N; i++) {
    if (a[0] <= b[i] && 0 < H) {
      answer++;
      H -= b[i];
    } else {
      break;
    }
  }

  if (0 < H) {
    answer += ceil((double) H / a[0]);
  }

  cout << answer << endl;

}