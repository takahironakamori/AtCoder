### ABC136

# D - Gathering Children

  [問題はこちら](https://atcoder.jp/contests/abc136/tasks/abc136_d)

## 発想

  10<sup>100</sup>回移動が繰り返される。偶数回であり、めちゃくちゃ多い。<br>
  したがって、結局 RL がある箇所に集まり、RとLの行き来を偶数回繰り返すことになる。<br>
  Rから始まり、Lに変わり、再度Rになる直前か、Lで終わるかまでを1つのセットと考える。<br>
  数値が行き来するのは、RからLに変わるところになり、<br>
  数値はRとLの差が偶数だったら、同じ値となり、<br>
  RとLの差が奇数だったらどちらかがRとLの個数 ÷ 2 となり、他方が、RとLの個数 ÷ 2 + 1となる。<br>
  さらに、RとLの差が奇数であり、大きい方の数が偶数の場合は、大きい方が + 1となり、奇数の場合は小さい方が + 1となる。<br>

  
## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> answer;

void count (int i, int countR, int countL) {
  // 中央
  int center = i - countL;
  // RとLの差
  int diff = abs(countR - countL);
  if (diff % 2 == 0) {
    // RとLの差が偶数だったら同じ値
    answer[center] = (countR + countL) / 2;
    answer[center + 1] = (countR + countL) / 2;
  } else {
    // RとLの差が奇数だったら大きい方に+1
    answer[center] = (countR + countL) / 2;
    answer[center + 1] = (countR + countL) / 2;
    // RとLの差が奇数だったら大きい方の数が偶数の場合は、
    if (countR < countL) {
      if (countL % 2 == 0) {
        answer[center]++;
      } else {
        answer[center + 1]++;
      }
    } else {
      if (countR % 2 == 0) {
        answer[center + 1]++;
      } else {
        answer[center]++;
      }
    }
  }
}

int main() {

  string S;
  cin >> S;

  answer.resize(S.size());

  // RとLが何個続くかを数える
  int countR = 0;
  int countL = 0;
  for (int i = 0; i < S.size(); i++) {
    if (i == S.size() - 1) {
      countL++;
      count (i, countR, countL);
    } else if (S[i] == 'R' && countL != 0) {
      count (i - 1, countR, countL);
      countR = 1;
      countL = 0;
    } else if (S[i] == 'R' && countL == 0) {
      countR++;
    } else {
      countL++;
    }
  }

  for (int i = 0; i < answer.size(); i++) {
    cout << answer[i];
    if (i != answer.size() - 1) {
      cout << " ";
    }
  }
  cout << endl;

  return 0;
}
```
