#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<string> S1(4);
  vector<string> S2(4);
  vector<string> S3(4);
  vector<string> S4(4);

  for (int i = 0; i < 4; i++) {
    cin >> S1[i];
  }
  for (int i = 0; i < 4; i++) {
    cin >> S2[i];
  }
  for (int i = 0; i < 4; i++) {
    cin >> S3[i];
  }
  for (int i = 0; i < 4; i++) {
    cin >> S4[i];
  }

  cout << S4[3] << " " << S4[2] << " " << S4[1] << " " << S4[0] << endl;
  cout << S3[3] << " " << S3[2] << " " << S3[1] << " " << S3[0] << endl;
  cout << S2[3] << " " << S2[2] << " " << S2[1] << " " << S2[0] << endl;
  cout << S1[3] << " " << S1[2] << " " << S1[1] << " " << S1[0] << endl;

}