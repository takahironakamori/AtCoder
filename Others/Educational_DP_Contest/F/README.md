### Educational DP Contest / DP まとめコンテスト

# F - LCS

  [問題はこちら](https://atcoder.jp/contests/dp/tasks/dp_f)

- 発想<br>
  共通部分列は以下の 3 つに分類することができる。<br>
  ・ s_i+1 = t_j+1 ならば s_1 ... s_i と t_1 ... t_j に対する共通部分列に 1 加えた値<br>
  s_i+1 ≠ t_j+1 ならば、以下の大きい方になる。<br>
  ・ s_1 ... s_i と t_1 ... t_j+1 に対する共通部分列の値<br>
  ・ s_1 ... s_i+1 と t_1 ... t_j に対する共通部分列の値<br>
  <br>
  以上を整理すると、以下の漸化式を導くことができる。<br>
  s_i+1 = t_j+1 のとき<br>
  dp\[i+1]\[j+1] = dp\[i]\[j] + 1 <br>
  s_i+1 ≠ t_j+1 のとき<br>
  dp\[i+1]\[j+1] = max(dp\[i+1]\[j], dp\[i]\[j+1])<br>
  <br>
  また、最長共通部分列の文字列を生成する場合、まず、答えの文字列を用意する。<br>
  dpの計算した結果（n,m）を i, j として、i か j のどちらかが 0 になるまで以下を繰り返す。<br>
  ・(i,j)と（i-1,j）が同じ値のときは、i を 1 減らす。<br>
  ・上を満たさない場合は、(i,j)と（i,j-1）が同じ値の場合は j を 1 減らす。<br>
  ・上記いずれも満たさない場合は、s[i]を答えの文字列に加えて、i と j を 1 減らす。<br>
  <br>
  答えの文字列は文字列が逆になっているので、ひっくり返して出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s, t;
    cin >> s >> t;

    vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1));

    dp[0][0] = 0;

    for (int i = 0; i < s.size(); i++) {
      for (int j = 0; j < t.size(); j++) {
        if (s[i] == t[j]) {
          dp[i + 1][j + 1] = dp[i][j]+1;
        } else {
          dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
        }
      }
    }

    string answer = "";
    int i = s.size();
    int j = t.size();

    while (i && j) {
      if (dp[i][j] == dp[i - 1][j]) {
        i--;
      } else if (dp[i][j] == dp[i][j - 1]) {
        j--;
      } else {
        i--;
        j--;
        answer += s[i];
      }
    }

    reverse(answer.begin(), answer.end());
    cout << answer << endl;

  }
  ```
