#include <bits/stdc++.h>
using namespace std;

int main() {

  long x;
  cin >> x;

  long count = 2 * (x / 11);

  long mod = x % 11;

  if (0 < mod && mod < 7){
    count += 1;
  } else if (6 < mod) {
    count += 2;
  }

  cout << count << endl;

}