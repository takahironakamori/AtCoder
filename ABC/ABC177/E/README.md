### ABC177

# E - Coprime

  [問題文はこちら](https://atcoder.jp/contests/abc177/tasks/abc177_e)


## 発想

　・
  


## コード（C++）

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

  int limit = 1000100;

  vector<int> A(N);
  vector<int> count(limit);

  for (int i = 0; i < N; ++i){
    cin >> A[i];
    count[A[i]]++;
  }

  bool flg = true;
  for (int i = 2; i < limit; ++i){
    int check = 0; 
    for (int j = i; j < limit; j += i) {
      check += count[j];
    }
    if (1 < check) {
      flg = false;
    }
  }
  if (flg == true) {
    cout << "pairwise coprime" << endl;
    return 0;
  }

  int allgcd = A[0]; 
  for (int i = 1; i < N; ++i){
    allgcd = gcd(allgcd, A[i]);
  }
  if (allgcd == 1) {
    cout << "setwise coprime" << endl;
    return 0;
  }

  cout << "not coprime" << endl;

  return 0;

}
```
