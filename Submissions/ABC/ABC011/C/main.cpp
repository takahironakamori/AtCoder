#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> number(1000010);
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    number[a]++;
    number[b+1]--;
  }

  int m = number[0];

  for (int i = 1; i < number.size(); i++) {
    number[i] += number[i - 1];
    m = max(m, number[i]);
  }

  cout << m << endl;

}