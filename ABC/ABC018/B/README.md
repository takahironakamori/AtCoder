### ABC018

# B - 文字列の反転

  [問題はこちら](https://atcoder.jp/contests/abc018/tasks/abc018_2)


- 発想<br>
  文字列を以下の 3 つに分ける。<br>
  1. 1 文字目から l - 1 文字目までの文字列<br>
  2. l 文字目から r 文字目までの文字列<br>
  3. r + 1 文字目から最後までの文字列<br>
  1 の文字列 + 2 を反転した文字列 + 3 の文字列 を S と置き換える。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
      int l, r;
      cin >> l >> r;
      l--;
      r--;
      string answer1 = "";
      string answer2 = "";
      string answer3 = "";
      for (int j = 0; j < S.size(); j++) {
        if (j < l) {
          answer1 += S[j]; 
        } else if (l <= j && j <= r) {
          answer2 += S[j];
        } else {
          answer3 += S[j];
        }
      }
      reverse(answer2.begin(), answer2.end());
      S = answer1 + answer2 + answer3;
    }

    cout << S << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String S = sc.next();
      String[] sArr = S.split("");
      String[] dArr = new String[sArr.length];

      int N = sc.nextInt();
      Integer[] l = new Integer[N];
      Integer[] r = new Integer[N];

      for (int i = 0; i < N; i++) {
        l[i] = sc.nextInt();
        r[i] = sc.nextInt();
      }

      for (int i = 0; i < N; i++ ) {
        for (int j = l[i]; j <= r[i]; j++){
          dArr[j - 1] = sArr[j - 1];
        }
        int k = 1;
        for (int j = l[i]; j <= r[i]; j++){
          sArr[j - 1] = dArr[r[i] - k];
          k++;
        }
      }

      for ( int i = 0; i < sArr.length; i++ ) {
        System.out.print(sArr[i]);
      }

      System.out.println("");

    }
  }
  ```
    