#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  set<int> even;
  for (int i = 0; i < N; i++) {
    int n_;
    cin >> n_;
    if (n_ % 2 == 0){
      even.insert(n_);
    }
  }

  string answer = "APPROVED";

  for(auto item:even) {
    if (item % 3 != 0 && item % 5 != 0) {
      answer = "DENIED";
      break;
    }
  }

  cout << answer << endl;

  return 0;

}
