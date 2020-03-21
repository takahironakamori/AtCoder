### ABC104

# C - All Green

  [問題はこちら](https://atcoder.jp/contests/abc104/tasks/abc104_c)

## 発想

  N問ある問題のは以下の3パターンに分けることができる。<br>
  1.100i点を完全に解く<br>
  2.100i点を全く解かない<br>
  3.100i点を中途半端に解く<br>

  まず、1と2だけで全パターン試し、G以上になればその回数の最小値が回答となる。<br>
  G未満であれば、足らない分を2の中から1問当たりの点数が大きいもので賄う。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int D, G;
    cin >> D >> G;

    vector<pair<int,int>> PC(D);

    for (int i = 0; i < D; i++) {
      int p, c;
      cin >> p >> c;
      PC[i] = make_pair(p, c);
    }

    int answer = 1e9+7;

    // 1.100i点を完全に解く
    // 2.100i点を全く解かない
    // 3.100i点を中途半端に解く

    int current = 0;
    int count = 0;
    bool flg = false;

    // 3はないと過程した場合、1と2だけの全ての組み合わせをbit全探索で調べる
    for(int bits = 0; bits < (1 << D); bits++) {

      vector<int> bit;
      set<int, greater<int>> st;

      current = 0;
      count = 0;
      flg = false;

      for (int i = 0; i < D; i++) {
        if (bits & (1 << i)) {
          current += PC[i].first * 100 * (i + 1) + PC[i].second;
          count += PC[i].first;
        } else {
          st.insert(i);
        }
      }

      if (G <= current) {
        flg = true;
        answer = min(answer, count);
      } else {

        // 3が必要なケース

        bool flg2 = true;
        int dif = G - current;

        while (flg2) {
          for (auto item:st) {
            int count_ = ceil((double) dif / ((item + 1) * 100));
            if (count_ < PC[item].first) {
              count += count_;
              answer = min(answer, count);
              flg2 = false;
              break;
            }
          }
          flg2 = false;
        }

      }

    }

    cout << answer << endl;

    return 0;

  }
  ```
