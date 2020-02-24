#include <bits/stdc++.h>
using namespace std;

struct num {
  int num_;
  int count_;
};

bool cmp (const num &a, const num &b) {
  if (a.count_ > b.count_) {
    return true;
  }
  if (a.count_ < b.count_) {
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

  int N;
  cin >> N;

  vector<int> v(N);
  map<int, int> odd;
  map<int, int> even;

  for (int i = 0; i < N; i++) {
    cin >> v[i];
    if (i % 2 == 0) {
      even[v[i]]++;
    } else {
      odd[v[i]]++;
    }
  }

  vector<num> oddNums;

  for (auto item:odd) {
    num v_ = num();
    v_.num_ = item.first;
    v_.count_ = item.second;
    oddNums.push_back(v_);
  }

  vector<num> evenNums;

  for (auto item:even) {
    num v_ = num();
    v_.num_ = item.first;
    v_.count_ = item.second;
    evenNums.push_back(v_);
  }

  sort(oddNums.begin(), oddNums.end(), cmp);
  sort(evenNums.begin(), evenNums.end(), cmp);

  int firstOdd = oddNums[0].num_;
  int firstEven = evenNums[0].num_;

  // 最も多い数が偶奇で異なる場合はそれに合わす
  if (firstOdd != firstEven) {
    int answer = N / 2 - oddNums[0].count_;
    answer += N / 2 - evenNums[0].count_;
    cout << answer << endl;
    return 0;
  }

  // 最も多い数が同じで要素数がお互い1つの場合
  if (oddNums.size() == 1 && evenNums.size() == 1) {
    cout << evenNums[0].count_ << endl;
    return 0;
  }

  // どちらかの要素数が1つの場合は、他方の2番目に多いものに変える
  if (oddNums.size() == 1) {
    cout << N / 2 - evenNums[1].count_ << endl;
    return 0;
  }
  if (evenNums.size() == 1) {
    cout << N / 2 - oddNums[1].count_ << endl;
    return 0;
  }

  // 最も多い数が偶奇で同じであり、お互いの要素数が2つ以上ある場合

  int secondOdd = oddNums[1].num_;
  int secondEven = evenNums[1].num_;

  int answerOdd = 0;
  int answerEven = 0;

  // パターン1
  // 偶数番目は最も多い数値に変える
  // 奇数番目は2番目に多い数値に変える
  answerOdd = N / 2 - oddNums[0].count_;
  answerOdd += N / 2 - evenNums[1].count_;

  // パターン2
  // 偶数番目は2番目に多い数値に変える
  // 奇数番目は最も多い数値に変える
  answerEven = N / 2 - oddNums[1].count_;
  answerEven += N / 2 - evenNums[0].count_;

  // パターン1と2で小さい方が答え
  cout << min(answerOdd, answerEven) << endl;

  return 0;

}
