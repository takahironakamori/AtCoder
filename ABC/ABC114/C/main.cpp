#include <bits/stdc++.h>
using namespace std;

int N;
int answer;

void f(long long n) {

  // n を文字列にする
  string s = to_string(n);

  // 3,5,7が1回でも含まれていればOK
  if (s.find("3") != std::string::npos) {
    if (s.find("5") != std::string::npos) {
      if (s.find("7") != std::string::npos) {
        if (n <= N) {
          answer++;
        }
      }
    }
  }

  // 再帰で n に3,5,7を足した数値を作る
  if (n < 1000000000) {
    f(10 * n + 3);
    f(10 * n + 5);
    f(10 * n + 7);
  }

  return;

}

int main() {

  cin >> N;

  answer = 0;

  f(0);

  cout << answer << endl;

  return 0;

}
