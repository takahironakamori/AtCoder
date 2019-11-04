#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  set<int> treeSet;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    treeSet.insert(a);
  }

  int s = treeSet.size();

  if (s % 2 == 0) {
    cout << s - 1 << endl;
  } else {
    cout << s << endl;
  }

}