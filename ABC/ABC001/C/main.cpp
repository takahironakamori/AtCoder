#include <bits/stdc++.h>
using namespace std;

int main() {

  int Deg, Dis;
  cin >> Deg >> Dis;

  vector<string> angle = {"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"};
  int deg = ((Deg * 10 + 1125) / 2250) % 16;

  Dis = round((double) Dis / 6);

  int dis = 0;
  if (Dis <= 2) {
    dis = 0;
  } else if (Dis <= 15) {
    dis = 1;
  } else if (Dis <= 33) {
    dis = 2;
  } else if (Dis <= 54) {
    dis = 3;
  } else if (Dis <= 79) {
    dis = 4;
  } else if (Dis <= 107) {
    dis = 5;
  } else if (Dis <= 138) {
    dis = 6;
  } else if (Dis <= 171) {
    dis = 7;
  } else if (Dis <= 207) {
    dis = 8;
  } else if (Dis <= 244) {
    dis = 9;
  } else if (Dis <= 284) {
    dis = 10;
  } else if (Dis <= 326) {
    dis = 11;
  } else {
    dis = 12;
  }

  if (dis == 0) {
    cout << "C " << dis << endl;
  } else {
    cout << angle[deg] << " " << dis << endl;
  }

}