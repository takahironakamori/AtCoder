#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int H, W, M;
  cin >> H >> W >> M;

  vector<int> countH(H);
  vector<int> countW(W);

  set<pair<int, int>> point;

  for (int i = 0; i < M; ++i) {
    int h, w;
    cin >> h >> w;
    --h;
    --w;
    countH[h]++;
    countW[w]++;
    point.insert(make_pair(h,w));
  }

  int maxH = 0;
  int maxW = 0;
  for (int i = 0; i < H; ++i) {
    maxH = max(countH[i], maxH);
  }
  for (int i = 0; i < W; ++i) {
    maxW = max(countW[i], maxW);
  }

  vector<int> chooseH;
  vector<int> chooseW;
  for (int i = 0; i < H; ++i) {
    if (maxH == countH[i]) {
      chooseH.push_back(i);
    }
  }
  for (int i = 0; i < W; ++i) {
    if (maxW == countW[i]) {
      chooseW.push_back(i);
    }
  }

  int ans = maxH + maxW;
  for (int i = 0; i < int(chooseH.size()); ++i) {
    for (int j = 0; j < int(chooseW.size()); ++j) {
      if (point.count(make_pair(chooseH[i],chooseW[j]))) {
        continue;
      }
      cout << ans << endl;
      return 0;
    }
  }

  --ans;
  cout << ans << endl;

  return 0;

}