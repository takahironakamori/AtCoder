#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> h(N);
  int mx = 0;
  for(int i = 0; i < N; i++) {
    cin >> h[i];
    mx = max(mx, h[i]);
  }

  int answer = 0;
  int current = 0;

  for (int i = 0; i < N; i++) {
    if (h[i] < current) {
      answer += current - h[i];
    }
    current = h[i];
  }

  answer+= current;

  cout << answer << endl;

  return 0;

}
