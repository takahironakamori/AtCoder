#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> ABC(3);
  int K;
  cin >> ABC[0] >> ABC[1] >> ABC[2] >> K;

  sort(ABC.begin(), ABC.end(), std::greater<int>());

  for (int i = 0; i < K; i++) {
    ABC[0] *= 2;
  }

  cout << ABC[0] + ABC[1] + ABC[2] << endl;

}