#include <bits/stdc++.h>
using namespace std;

int main() {

  int X;
  cin >> X;

  int v = 0;
  int answer = 0;

  while (v < X) {
    answer++;
    v += answer;
  }

  cout << answer << endl;

}