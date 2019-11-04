### AGC039

# A - Connection and Disconnection

  [問題はこちら](https://atcoder.jp/contests/agc039/tasks/agc039_a)

- 発想
  
  書き換える必要がある文字数は、同じ文字が続く場合に、同じ文字が続く数 / 2 （切り捨て）だけ文字となる。<br>
  例:AAAA の場合は、4 / 2 = 2 個、AAA の場合は、3 / 2 = 1 個となる。<br>
  
  文字列 S は、3パターンに分かれる。<br>
  1.すべて同じ文字だけの場合（例：AAAAAA、Aの1文字だけ）<br>
  2.最初の文字と最後の文字が異なる場合（例：AAAB、ABDGFJ）<br>
  3.最初の文字と最後の文字が同じ場合（例：AABAA、ABCJDFHA）<br>
  
  まず、文字列 S について、異なる文字になるまでどれくらい文字が続くのかを調べる。<br>
  同じ文字を 1 つのグループと考える。<br>
  例：AAAABBCDDDD の場合だと、AAAA BB C DDDD と見て、<br>
  4 個同じ文字が続く、2 個同じ文字が続く、1 個文字がある、4個 同じ文字が続くというイメージで、4 つグループができる。<br>
  
  グループが 1 個しかない場合は、すべて同じ文字列になる。<br>
  同じ文字が続く数は文字列 S の長さなので、Sの長さ / 2 （切り捨て）* K が回答となる。<br>
  
  グループが 2 個以上ある場合で、最初の文字と最後の文字が異なる場合は、<br>
  グループの文字の数 / 2 の総和 * K が回答となる。<br>
  
  グループが 2 個以上ある場合で、最初の文字と最後の文字が同じ場合は計算が少し複雑になる。<br>
  例えば、AAABBAAA を考えると、AAA BB AAA の3グループに別れる。<br>
  K が 1 の場合は、グループの文字の数 / 2 の総和が回答となる。<br>
  K が 2 以上の場合は、K が 2 の場合を考えると、AAA BB AAAAAA BB AAA となり、1回目の最後のグループと2回目の最初のグループがひっついてしまう。<br>
  1回目の最後のグループと2回目の最初のグループを離して考えると、<br>
  AAA AAA となるので、3 / 1 + 3 / 1 の合計 2 個となる。<br>
  1回目の最後のグループと2回目の最初のグループをひっつけて考えると、
  AAAAAA となるので、6 / 2 で 3 個となる。<br>
  K が 2 以上の場合は、(K - 1)回だけ、最後と最初グループがひっつくので、ひっつけた場合の数と離して考えた場合の数の差に (K - 1) 回かけた数を求め、グループの文字の数 / 2 の総和 * K に求めた数を加えたものが回答となる。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    long K;
    cin >> K;

    vector<int> v;
    v.push_back(1);

    int count = 0;

    for (int i = 1; i < S.size(); i++) {
      if (S[i - 1] == S[i]) {
        v[count]++;
      } else {
        count++;
        v.push_back(1);
      }
    }

    if (v.size() == 1) {

      cout << S.size() * K / 2 << endl;

    } else {

      long result = 0;
      int size = v.size();

      if (S[0] != S[S.size() - 1]) {

        for (int i = 0; i < size; i++) {
          int v_ = v[i];
          result += v_ / 2;
        }

        cout << result * K << endl;

      } else {

        for (int i = 0; i < size; i++) {
          int v_ = v[i];
          result += v_ / 2;
        }

        int a1 = v[0] / 2 + v[size - 1] / 2;
        int a2 = (v[0] + v[size - 1]) / 2;

        cout << result * K + (a2 - a1) * (K - 1) << endl;

      }

    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String S = sc.next();
      long K = sc.nextLong();

      sc.close();

      String[] s = S.split("");

      TreeMap<Integer, Integer> map = new TreeMap<>();

      int count = 0;
      map.put(count, 1);
      for (int i = 1; i < s.length; i++) {
        if (s[i - 1].equals(s[i])) {
          int v_ = map.get(count);
          map.put(count, v_ + 1);
        } else {
          count++;
          map.put(count, 1);
        }
      }

      if (map.size() == 1) {

        System.out.println(s.length * K / 2);

      } else {

        int result = 0;
        int size = map.size();

        if (!s[0].equals(s[s.length-1])){

          for (int i = 0; i < size; i++) {
            int v_ = map.get(i);
            result += v_ / 2;
          }

          System.out.println(result * K);

        } else {

          for (int i = 0; i < size; i++) {
            int v_ = map.get(i);
            result += v_ / 2;
          }

          int a1 = map.get(0) / 2 + map.get(size - 1) / 2;
          int a2 = (map.get(0) + map.get(size - 1)) / 2;

          System.out.println(result * K + (a2 - a1) * (K - 1));

        }

      }

    }

  }
  ```
    