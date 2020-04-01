#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> count(100010);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    count[a]++;
  }

  int answer = 0;

  for (int i = 0; i < count.size() - 2; i++) {
    answer = max(count[i] + count[i+1] + count[i+2], answer);
  }

  cout << answer << endl;

  return 0;

}
