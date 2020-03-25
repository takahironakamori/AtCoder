### ABC081

# C - Not so Diverse

  [問題はこちら](https://atcoder.jp/contests/abc081/tasks/arc086_a)


## 発想

  整数が何回使われているのかを数える。<br>
  使われている個数が少ない順に並び替える。<br>
  少ない方から、使われている整数の種類からKを引いた種類数分、書き換えることになる。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  // 構造体
  struct num {
    int num_;
    int count_;
  };

  // 比較関数
  bool cmp (const num &a, const num &b) {
    if (a.count_ < b.count_) {
      return true;
    }
    if (a.count_ > b.count_) {
      return false;
    }
    if (a.num_ > b.num_) {
      return true;
    }
    if (a.num_ < b.num_) {
      return false;
    }
    return false;
  }

  int main() {

    int N, K;
    cin >> N >> K;

    map<int,int> counts;
    for (int i = 0; i < N; i++) {
      int A;
      cin >> A;
      counts[A]++;
    }

    vector<num> nums;
    for (auto item:counts){
      num n_ = num();
      n_.num_ = item.first;
      n_.count_ = item.second;
      nums.push_back(n_);
    }

    // 比較関数で並び替え
    sort(nums.begin(), nums.end(), cmp);

    int answer = 0;

    if (K < nums.size()) {

      for (int i = 0; i < nums.size() - K; i++) {
        answer += nums[i].count_;
      }

    }

    cout << answer << endl;

    return 0;

  }
  ```
