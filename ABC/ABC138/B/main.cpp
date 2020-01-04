#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  double answer = 0;

  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    answer += (double) 1 / A;
  }

  cout << setprecision(11) <<(double) 1 / answer << endl;

}