#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<pair<int,int>> sc(N);
  for (int i = 0; i < M; i++) {
    cin >> sc[i].first >> sc[i].second;
  }

  // keyを桁,valueをその桁の値で管理するmap。
  // 見ていない桁は値を-1(初期値)とする。
  map<int,int> v;
  for (int i = 1; i <= N; i++) {
    v[i] = -1;
  }

  // 答えになる整数があるか(ture)、ないか(false)
  bool flg = true;

  // mapに桁と値を入れる。
  // 一度値を入れた桁については、同じ値じゃないとダメ。
  for (int i = 0; i < M; i++) {
    int i_ = sc[i].first;
    if (v[i_] == -1) {
      v[i_] = sc[i].second;
    } else if (v[i_] != sc[i].second){
      flg = false;
      break;
    }
  }

  // mapの1桁目の値が0の場合は、
  // Nが1以外の場合はダメ。
  if (v[1] == 0) {
    if (N != 1) {
      flg = false;
    }
  } else if (v[1] == -1) {
    // 1桁目の値が-1の場合は、
    // Nが1の場合は0、それ以外は1にする。
    if (N == 1) {
      v[1] = 0;
    } else {
      v[1] = 1;
    }
  }

  int answer = -1;

  if (flg) {
    // 答えを作る。
    answer = 0;
    for (int i = 1; i <= N; i++) {
      if (v[i] != -1) {
        answer += v[i] * pow(10, N - i);
      }
    }
  }

  cout << answer << endl;

  return 0;

}
