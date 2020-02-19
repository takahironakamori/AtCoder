### ABC124

# D - Handstand

  [問題はこちら](https://atcoder.jp/contests/abc124/tasks/abc124_d)


- 発想<br>
  0 が続いている箇所を K 箇所入れ替えたときに、1 が最大何個続くのかを探す。<br>
  K = 2<br>
  111010101100 で考えると、<br>
  1 が 3 個, 0 が 1 個, 1 が 1 個, 0 が 1 個, 1 が 1 個, 0 が 1 個, 1 が 2 個, 0 が 2 個並んでいる。<br>
  個数だけを配列に入れると {3,1,1,1,1,1,2,2,2} となる。<br>
  1 が 3 個, 0 が 2 個, 1 が 3 個並んでいるところの 0 を 1 に変えると、1 は 3 + 2 + 3 = 8 個続くことになる。<br>
  すなわち、個数の配列は、1 の個数 で始まり、 1 の個数で終わると、S がどのような場合でも 0 の個数は要素の奇数番目にあるし、最後の 1 の個数も数えやすいので、都合がいい。<br>
  したがって、 {3,1,1,1,1,1,2,2,2} は最後は 0 の個数なので、最後に 0 を追加しておく。<br>
  {3,1,1,1,1,1,2,2,2,0} となる。<br>
  K については、例えば、K = 2 だと、 {3,1,1,1,1,1,2,2,2,0} の最初の 0([1]のところ)と最後の 0([9]のところ) というように 0 をまたぐと連続した 1 は最大ではない。<br>
  最大になるのは、連続した 0 の個数の要素を選択する必要がある。<br>
  K = 2 で {3,1,1,1,1,1,2,2,2,0} を見た場合、<br>
  3 + 1 + 1 + 1 + 1、<br>
  1 + 1 + 1 + 1 + 2、<br>
  1 + 1 + 2 + 2 + 2、<br>
  1 + 2 + 2 + 2 + 0 と 2 * K + 1 個ずつ、ずらして最大の合計値を探す。<br>
  ずらし方は、左と右をずらしスライドさせる方法や累積和を使う方法がある。<br>



- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {

    int N, K;
    string S;
    cin >> N >> K >> S;

    // 0 が何個、1 が何個ならんでいるかを保持する配列
    vector<int> v;

    // 今見ている数 1 or 1
    int current = 1;

    // 今見ている数が何個並んでいるか
    int count = 0;

    for (int i = 0; i < N; i++) {
      if (S[i] == (char) '0' + current) {
        count++;
      } else {
        v.push_back(count);
        current = 1 - current;
        count = 1;
      }
    }
    // 最後の分
    if (count != 0) {
      v.push_back(count);
    }

    // 1-0-1-0-1 と 1 を最後にする
    if (v.size() % 2 == 0){
      v.push_back(0);
    }

    int answer = 0;
    int add = 2 * K + 1;

    // 累積和
    vector<int> sum(v.size()+1);
    for (int i = 0; i < v.size(); i++) {
      sum[i + 1] = sum[i] + v[i];
    }

    for (int i = 0; i < v.size(); i += 2) {

      int left = i;
      int right = min(i + add, (int) v.size());

      int tmp = sum[right] - sum[left];

      answer = max(answer, tmp);
    }

    cout << answer << endl;

    return 0;

  }
  ```
