#include <bits/stdc++.h>
using namespace std;

int main() {

  string S, T;
  cin >> S >> T;

  map<int, int> countS;
  for (int i = 0; i < S.size(); i++) {
    countS[S[i] - 'a']++;
  }

  vector<int> countS_;
  for (auto item: countS) {
    countS_.push_back(item.second);
  }

  map<int, int> countT;
  for (int i = 0; i < T.size(); i++) {
    countT[T[i] - 'a']++;
  }

  vector<int> countT_;
  for (auto item: countT) {
    countT_.push_back(item.second);
  }

  sort(countS_.begin(), countS_.end());
  sort(countT_.begin(), countT_.end());

  if (countS_ == countT_) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;

}
