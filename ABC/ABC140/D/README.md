### ABC140

# D - Face Produces Unhappiness

  [問題はこちら](https://atcoder.jp/contests/abc140/tasks/abc140_d)

## 発想（説明がやや不十分なので修正が必要）

  すべて L または R にすることができる場合、すなわち、最大の幸福な人の数は N - 1 人である。<br>
  幸福な人を最大にしようと l, r を選ぶときは、幸福な人は2人しか純増しない。<br>
  例:LRLRRL（幸福な人：1名）<br>
  l = 2, r = 5 とすると、LLLRLLとなり、幸福な人は 3 名となる。<br>
  l = 4, r = 5 とすると、LRLLLLとなり、幸福な人は 3 名となる。<br>
  例:LRRLRLRRLRLLR（幸福な人：3名）<br>
  l = 2, r = 3 とすると、LLLLRLRRLRLLRとなり、幸福な人は 5 名となる。<br>
  l = 7, r = 8 とすると、LLLLRLLLLRLLRとなり、幸福な人は ７ 名となる。<br>
  l = 10, r = 10 とすると、LLLLRLLLLLLLRとなり、幸福な人は 9 名となる。<br>
  したがって、もともとの幸福な人の数に2 × Kを加えたものと N - 1 の小さい方が回答となる。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    int count = 0;

    for (int i = 0; i < N - 1; i++) {
      if (S[i] == S[i + 1]) {
        count++;
      }
    }

    int answer = min(count + 2 * K, N - 1);
    cout << answer << endl;

    return 0;
  }
  ```
