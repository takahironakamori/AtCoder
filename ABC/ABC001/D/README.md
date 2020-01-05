### ABC001

# D - 感雨時刻の整理

  [問題はこちら](https://atcoder.jp/contests/abc001/tasks/abc001_4)


- 発想<br>
  0000 から 2400 までを要素とする配列を用意して、<br>
  丸めた降り始めの時刻の要素は 1 を加え、<br>
  丸めた降り終わりの時刻の要素は 1 減らす。<br>
  丸めた降り終わりの時刻の分が 60 になっていたら繰り上げる作業を忘れない。<br>
  すべての入力について、配列に反映させたら、0001 から順に前の要素とその要素の値を足していく。<br>
  例えば、|0|1|2|2|1|0|0|1|1|1|0| のように 0 は雨が降っていない時間帯、0 以外は雨が降っている時間帯となる。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    // 雨が降った時刻を保持する配列
    vector<int> answer(2401);

    for (int i = 0; i < N; i++) {
      string SE;
      cin >> SE;

      // 降り始めの時刻を丸める
      string S = SE.substr(0,4);
      int s = atoi(S.c_str());
      s = s - (s % 5);

      // 降り終わりの時刻を丸める
      string E = SE.substr(5,4);
      int e = atoi(E.c_str());
      if (e % 5 == 0) {
        e = e;
      } else {
        e = e + (5 - e % 5);
      }

      // 丸めた結果が60になったら繰り上げる
      if (e % 100 == 60) {
        e += 40;
      }

      // 配列の降り始めの時刻を 1 加える
      answer[s]++;

      // 配列の降り終わりの時刻を 1 減らす
      answer[e]--;

    }

    // 配列の前の要素を足し合わしてく。
    // 雨が降っている時間は必ずプラスの数になり、
    // 雨が降っていない時間は０になる
    for (int i = 1; i <= 2400; i++) {
      answer[i] = answer[i - 1] + answer[i];
    }

    // true:開始時間を出力済み false:開始時間を未出力
    bool flg = false;

    for (int i = 0; i <= 2400; i++) {

      // 0 じゃない場合は雨が降っている時間
      if (0 < answer[i]) {
        if (flg == false) {
          flg = true;
          printf("%04d", i);
          printf("-");
        }
      } else {
        if (flg) {
          flg = false;
          printf("%04d", i);
          printf("\n");
        }
      }
    }

    // ループが終わった後でも flg = trueなら、
    // 2400まで雨が降っていたことになる 
    if (flg) {
      flg = false;
      printf("%04d", 2400);
      printf("\n");
    }

  }
  ```
    