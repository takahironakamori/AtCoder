#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int answer = 111;

  if (100 <= N && N <= 111) {
    answer = 111;
  } else if (112 <= N && N <= 222) {
    answer = 222;
  } else if (223 <= N && N <= 333) {
    answer = 333;
  } else if (334 <= N && N <= 444) {
    answer = 444;
  } else if (445 <= N && N <= 555) {
    answer = 555;
  } else if (556 <= N && N <= 666) {
    answer = 666;
  } else if (667 <= N && N <= 777) {
    answer = 777;
  } else if (778 <= N && N <= 888) {
    answer = 888;
  } else {
    answer = 999;
  }
  
  cout << answer << endl;

}