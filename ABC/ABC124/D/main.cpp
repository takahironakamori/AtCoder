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
