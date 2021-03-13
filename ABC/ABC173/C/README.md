### ABC173

# C - H and V

  [https://atcoder.jp/contests/abc173/tasks/abc173_c]


## 発想

  ・H, W ≦ 6 で、それぞれ選ぶ or 選ばない の 2 通りがあるので、2^12 = 4096 通りなので全部試すことができる。
  ・選ぶ、選ばないのリストはBit全探索など、いろいろやり方はある。 


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> createBits(int a) {
  vector<vector<int>> v;
  vector<int> bit;
  v.push_back(bit);
  for (int bits = 1; bits < (1 << a); ++bits) {
    vector<int> bit;
    for (int i = 0; i < a; ++i) {
      if (bits >> i & 1) {
        bit.push_back(i);
      }
    }
    v.push_back(bit);
  }
  return v;
}

int main() {

  int ans = 0;
  int all = 0;

  int H, W, K;
  cin >> H >> W >> K;

  string graph[H];

  for (int i = 0; i < H; ++i) {
    cin >> graph[i];
    for (int j = 0; j < W; ++j) {
      if (graph[i][j] == '#') {
        all++;
      }
    }
  }

  vector<vector<int>> bitsH = createBits(H);
  vector<vector<int>> bitsW = createBits(W);

  for (int i = 0; i < bitsH.size(); ++i) {
    
    vector<int> checkH(H);

    for (int j = 0; j < bitsH[i].size(); ++j) {
      int h = bitsH[i][j];
      checkH[h] = 1;
    }

    for (int l = 0; l < bitsW.size(); ++l) {

      vector<int> checkW(W);
        
      for (int m = 0; m < bitsW[l].size(); ++m) {
        int w = bitsW[l][m];
        checkW[w] = 1;
      }
      
      int count = 0;

      for (int i2 = 0; i2 < H; ++i2) {
        for (int j2 = 0; j2 < W; ++j2) {
          if (graph[i2][j2] == '#'){
            if(checkH[i2] == 1 || checkW[j2] == 1) {
              count++;
            }
          }
        }
      }

      if (all - count == K) {
        ans++;
      }

    }
  }

  cout << ans << endl;

  return 0;
}
```
