#include <bits/stdc++.h>
using namespace std;

int main() {

  string N;
  cin >> N;

  int N2 = 0;
  int N3 = 0;

  for (int i = 0; i< N.size(); i++) {
    N2 += (N[i] - '0') * pow(10, N.size() - 1 - i);  
    N3 += N[i] - '0';
  }

  if (N2 % N3 == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}