### ARC105

# B - MAX-=min

[問題はこちら](https://atcoder.jp/contests/arc105/tasks/arc105_b)


## 発想

  


## コード（C++） 想定解法

```cpp
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { 
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b); 
}


int main() {
  
  int N;
  cin >> N;

  set<int> st;

  for (int i = 0; i < N; ++i) {
    int a;
    cin >> a;
    st.insert(a);
  }

  int ans = *st.begin();

  for (auto item: st) {
    ans = gcd(ans, item);
  }

  cout << ans << endl;

  return 0;
}
```

## コード（C++） 想定外解法
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;

  set<int> st;

  for (int i = 0; i < N; ++i) {
    int a;
    cin >> a;
    st.insert(a);
  }

  while (1 < st.size()) {
    int mx = *st.rbegin();
    int mn = *st.begin();
    st.insert(mx - mn);
    st.erase(mx);
  }

  cout << *st.begin() << endl;

  return 0;
}
```
