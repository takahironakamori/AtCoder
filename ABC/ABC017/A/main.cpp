#include <bits/stdc++.h>
using namespace std;

int main() {

  int s1, s2, s3;
  int e1, e2, e3;
  cin >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

  int answer = s1 * e1 / 10;
  answer += s2 * e2 / 10;
  answer += s3 * e3 / 10;

  cout << answer << endl;

}