#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  // 30 で割ったときの余り
  int count = N % 30;

  // 余りを 5 で割った商
  int a = count / 5;

  // 余りを 5 で割った余り
  int b = count % 5;

  // 30 で割った余りを 5 で割った時の
  // 商の状態（1 から 6 までの並び順）を作る
  vector<int> answer(6);
  for (int i = 0; i < 6; i++) {
    if (6 < i + 1 + a) {
      answer[i] = i + a - 5;
    } else {
      answer[i] = i + a + 1;
    }
  }

  // 30 で割った余りを 5 で割った時の
  // 余りの回数だけ入れ替える
  for (int i = 0; i < b; i++) {
    swap(answer[i + 1], answer[i]);
  }

  for (int i = 0; i < 6; i++) {
    cout << answer[i];
  }
  cout << endl;

}
