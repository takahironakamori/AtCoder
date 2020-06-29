#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  // 1個ずつ買う
  int a = N * 15;

  // 10個ずつ買えるだけ買って、余った分を1個ずつ買う
  int b = (N / 10) * 100;
  b += (N % 10) * 15;

  // 10個パックで全部買う
  int c = ceil((double) N / 10) * 100;

  cout << min(a, min(b, c)) << endl;
  return 0;

}
