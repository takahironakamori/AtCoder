#include <bits/stdc++.h>
using namespace std;


int main() {

  int N, Q;
  string S;
  cin >> N >> S >> Q;

  // アルファベットのそれぞれの文字が何番目で使われているかを昇順で保持
  vector<set<int>> st(26);
  for (int i = 0; i < N; ++i) {
    st[S[i]-'a'].insert(i);
  }

  for (int j = 0; j < Q; ++j) {
    int type;
    cin >> type;
    if (type == 1) {
      int iq;
      char cq;
      cin >> iq >> cq;
      --iq;
      st[S[iq]-'a'].erase(iq);
      S[iq] = cq;
      st[S[iq]-'a'].insert(iq);
    } else {
      int lq, rq;
      cin >> lq >> rq;
      --lq;
      int ans = 0;
      for (int k = 0; k < 26; ++k) {
        auto v = st[k].lower_bound(lq);
        if (v != st[k].end() && *v < rq) {
          ++ans;
        } 
      }
      cout << ans << endl;
    }
  }

  return 0;

}