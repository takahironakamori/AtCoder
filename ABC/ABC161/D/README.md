### ABC160

# D - Lunlun Number

  [問題はこちら](https://atcoder.jp/contests/abc161/tasks/abc161_d)


## 発想

  1桁のルンルン数は、1,2,3,4,5,6,7,8,9となる。<br>
  2桁のルンルン数は、10,11,12,21,22,23,32,...,98,99となる。<br>
  1桁のルンルン数1の末尾に0(=1-1),1,2(=1+1)を付け加えたものが、2桁のルンルン数10,11,12になる。<br>
  1桁のルンルン数2の末尾に1(=2-1),2,3(=2+1)を付け加えたものが、2桁のルンルン数21,22,23になる。<br>
  上記のように考えるとルンルン数を効率的に生成できるので、ルンルン数をK個生成する。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int K;
  cin >> K;

  vector<long long> a;
  for (int i = 1; i < 10; i++){
    a.push_back(i);
  }

  bool flg = true;
  while (flg) {
    if (K <= a.size()) {
      cout << a[K - 1] << endl;
      return 0;
    }
    K -= a.size();
    vector<long long> old;
    swap(old, a);
    for (int i = 0; i < old.size(); i++) {
      for (int j = -1; j < 2; j++) {
        int d = old[i] % 10 + j;
        if (d < 0 || 9 < d) {
          continue;
        }
        long long r = old[i] * 10 + d;
        a.push_back(r);
      }
    }
  }

  return 0;

}
```
