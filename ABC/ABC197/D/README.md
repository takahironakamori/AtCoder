### ABC197

# D - Opposite

  [問題文はこちら](https://atcoder.jp/contests/abc197/tasks/abc197_d)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;

  double x0, y0, x2, y2;
  cin >> x0 >> y0;
  cin >> x2 >> y2;
  
  complex<double> s = complex<double>(x0, y0);
  complex<double> t = complex<double>(x2, y2);

  complex<double> o = (s + t) / 2.0;
  double PI = acos(-1);
  double rad = 2 * PI / N;
  complex<double> r = complex<double>(cos(rad), sin(rad));
  complex<double> ans = o + (s - o) * r;
  
  printf("%.10f %.10f\n", ans.real(), ans.imag());
  
  return 0;

}
```
