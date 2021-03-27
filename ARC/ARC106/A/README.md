### ARC106

# A - 106

[問題はこちら](https://atcoder.jp/contests/arc106/tasks/arc106_a)


## 発想

  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  long long N;
  cin >> N;

  long long mx = 1000000000000000000;
  vector<long long> threes;
  vector<long long> fives;

  threes.push_back(1);
  fives.push_back(1);

  while(threes[threes.size() - 1] <= mx) {
    long long v = threes[threes.size() - 1] * 3;
    threes.push_back(v);
  }

  while(fives[fives.size() - 1] <= mx) {
    long long v = fives[fives.size() - 1] * 5;
    fives.push_back(v);
  }

  string ans = "-1";
  for (int i = 1; i < int(threes.size()); ++i) {
    for (int j = 1; j < int(fives.size()); ++j) {
      if (threes[i] + fives[j] == N) {
        ans = to_string(i) + " " + to_string(j);
        cout << ans << endl;
        return 0;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
```
