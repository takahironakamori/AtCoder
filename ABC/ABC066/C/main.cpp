#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  deque<int> b;

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      b.push_back(a[i]);
    } else {
      b.push_front(a[i]);
    }
  }

  if (a.size() % 2 == 1) {
    while (!b.empty()) {
      cout << b.back() << " ";
      b.pop_back();
    }
  } else {
    while (!b.empty()) {
      cout << b.front() << " ";
      b.pop_front();
    }
  }
  cout << endl;

  return 0;

}
