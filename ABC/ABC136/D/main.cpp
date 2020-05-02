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
