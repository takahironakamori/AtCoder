#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  int N;
  cin >> N;

  string answer = "";
  answer += S[(N - 1) / 5];
  answer += S[(N - 1) % 5];

  cout << answer << endl;

}