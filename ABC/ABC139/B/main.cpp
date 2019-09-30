#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B;
  cin >> A >> B;

  int count = 0;
  int sum = A;

  while (sum < B) {
    count++;
    sum = sum - 1 + A;
  }

  if (B == 1) {
    count = 0;
  }

  cout << count << endl;

}