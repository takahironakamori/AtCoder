### ABC152

# D - Handstand 2

  [問題はこちら](https://atcoder.jp/contests/abc152/tasks/abc152_d)


- 発想<br>
  
  例えば、105 で考える。<br>
  1 から 105 まで \[size()桁目の数値(10以上の場合だけ), 1桁目の数値]、<br>
  すなわち、1 なら、\[0, 1]、<br>
  22 なら、\[2, 2]、<br>
  105 なら、\[1, 5]として、<br>
  \[size()桁目の数値(10以上の場合だけ), 1桁目の数値] が何回あるかを数える。<br>
  次に、1 から 105 まで \[1桁目の数値,size()桁目の数値(10以上の場合だけ)] を作り、<br>
  \[1桁目の数値,size()桁目の数値(10以上の場合だけ)] が何回あったかを回答に足していく。<br>
  すなわち、1 なら、\[1, 0]が何回あったか、<br>
  22 なら、\[2, 2]が何回あったか、<br>
  105 なら、\[5, 1]が何回あったかを回答に足していく。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  pair<int, int> makePair(int x) {
    int a = 0;
    int b = x % 10;
    while (x) {
      a = x;
      x /= 10;
    }
    return make_pair(a, b);
  }

  int main() {

    int n;
    cin >> n;

    // i = 1234 の場合、
    // pair(1, 4) にして、
    // map[pair(1,4)]に 1 加える
    map<pair<int,int>, int> mp;
    for (int i = 1; i <= n; i++) {
      pair<int, int> p = makePair(i);
      mp[p]++;
    }

    int answer = 0;

    // i = 1234の場合、
    // pair(4,1)にして、
    // 答えに map[pair(4,1)] の値を加える
    for (int i = 1; i <= n; i++) {
      pair<int, int> p = makePair(i);
      pair<int, int> q = make_pair(p.second, p.first);
      answer += mp[q];
    }

    cout << answer << endl;

  }
  ```
    