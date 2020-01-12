### ABC002

# C - 直訴

  [問題はこちら](https://atcoder.jp/contests/abc002/tasks/abc002_3)

- 発想<br>
  符号付面積の公式を利用する。<br>
  (0,0),(a,b),(c,d) の 3 点があるすると、<br>
  面積 S = |ad - bc| ÷ 2 となる。<br>
  (0,0)に点がない場合は、全体を 1 つの点が(0,0)になるように平行移動させればいい。<br>
  すなわち、(e,f),(a,b),(c,d) ならば、<br>
  (e-e=0,f-f=0),(a-e,b-f),(c-e,d-f)と平行移動させて考えても面積は変わらない。<br>
  3 点のうちどの点を(0,0)へ平行移動させても面積は変わらない。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {

    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int a = x2 - x1;
    int b = y2 - y1;
    int c = x3 - x1;
    int d = y3 - y1;

    // |ad - bc| / 2
    double answer = (double) abs(a * d - b * c) / 2;

    printf("%.16f", abs(answer));
    printf("\n");

  }
  ```