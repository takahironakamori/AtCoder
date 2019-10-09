#include <bits/stdc++.h>
using namespace std;

int main() {

  long A, B, C;
  cin >> A >> B >> C;
  
  long mod = 1000000000 + 7;

  cout << ((A * B) % mod) * C % mod << endl;

}