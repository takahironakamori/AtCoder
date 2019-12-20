#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> count(11);

  int N;
  cin >> N;

  int answer = 0;

  for (int i = 1; i <= N; i++) {
    answer += i;
  }

  cout << answer << endl;

}