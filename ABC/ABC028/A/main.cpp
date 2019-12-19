#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  if (N == 100) {
    cout << "Perfect" << endl;
  } else if (N <= 99 && 90 <= N) {
    cout << "Great" << endl;
  } else if (N <= 89 && 60 <= N){
    cout << "Good" << endl;
  } else {
    cout << "Bad" << endl;
  }

}