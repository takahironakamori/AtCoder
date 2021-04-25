### ABC199

# C - IPFL

  [問題文はこちら](https://atcoder.jp/contests/abc199/tasks/abc199_c)


## 発想

　・
  #include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  string S;
  cin >> S;

  int Q;
  cin >> Q;

  int count = 0;

  for (int i = 0; i < Q; ++i) {
    int T, A, B;
    cin >> T >> A >> B;
    A--;
    B--;
    if (T == 1) {
      int a = A;
      int b = B;
      if (count % 2 == 1) {
        if (a < N) {
          a += N;
        } else {
          a -= N;
        }
        if (b < N) {
          b += N;
        } else {
          b -= N;
        }
      }
      char C = S[a];
      S[a] = S[b];
      S[b] = C;
    } else {
      count++;
    }
  }

  if (count % 2 == 1) {
    string s = S.substr(0, N);
    string s1 = S.substr(N);
    S = s1 + s;
  }

  cout << S << endl;
  
  return 0;

}
```
