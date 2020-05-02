#include <bits/stdc++.h>
using namespace std;

// 構造体
struct work {
  int A;
  int B;
};

// 比較関数
bool cmp (const work &a, const work &b) {
  if (a.B < b.B) {
    return true;
  }
  if (a.B > b.B) {
    return false;
  }
  if (a.A < b.A) {
    return true;
  }
  if (a.A > b.A) {
    return false;
  }
  return false;
}

int main() {

  int N;
  cin >> N;

  // A と B の情報を構造体を入れた配列で管理
  vector<work> W;
  for (int i = 0; i < N; i++) {
    int A_, B_;
    cin >> A_ >> B_;
    work w_ = work {A_, B_};
    W.push_back(w_);
  }

  // 比較関数で並び替え
  sort(W.begin(), W.end(), cmp);

  string answer = "Yes";

  // current:処理した仕事の量
  int current = 0;
  // 空き時間
  int free = 0;

  for (int i = 0; i < N; i++) {

    // 処理した時間に A を加える
    current += W[i].A;

    // B より処理した時間が大きいと作業は終わらない
    if (W[i].B < current) {
      answer = "No";
      break;
    }

  }

  cout << answer << endl;

  return 0;
}
