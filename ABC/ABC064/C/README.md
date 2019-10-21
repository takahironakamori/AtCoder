### ABC064

# C - Colorful Leaderboard

  [問題はこちら](https://atcoder.jp/contests/abc064/tasks/abc064_c)

- 発想<br>
  レートによってどの色が使われるかを判断する。<br>
  3200 以上の人と 3200 未満の人を分けて考える。<br>
  3200 以上の人がいなくて、3200 未満の人だけの場合<br>
  ・最小値：レートに応じて所属する色の数<br>
  ・最大値：最小値と同じ<br>
  3200 以上の人がいて、3200 未満の人がいる場合<br>
  ・最小値：3200 未満の人たちの色の数<br>
  ・最大値：最小値＋3200以上のレートの人の数<br>
  3200 以上の人がいて、3200 未満の人がいない場合<br>
  ・最小値：1<br>
  ・最大値：3200以上のレートの人の数<br>
  

- 実装のポイント<br>
  色の判定を 400 で割った商を利用する場合と愚直にif文を重ねるのどちらでもいい。<br>
  どちらもレートが 3200 以上の場合に注意する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    // color[0]:灰 [1]:茶 [2]:緑 [3]:水 [4]:青 [5]:黄 [6]:オレンジ [7]:赤 [8]:自由
    vector<int> color(9);
    for (int i = 0; i < N; i++) {
      int a;
      cin >> a;
      int b = a / 400;
      if (8 <= b) {
        color[8]++;
      } else {
        color[b]++;
      }
    }

    int min = 0;
    int max = 0;

    for (int i = 0; i < 8; i++) {
      if (color[i] != 0) {
        min++;
      }
    }

    max = min + color[8];

    if (min == 0) {
      min = 1;
    }

    cout << min << " " << max << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      Integer[] a = new Integer[N];

      for (int i = 0; i < N; i++) {
        a[i] = sc.nextInt();
      }

      sc.close();

      // color[0]:灰 [1]:茶 [2]:緑 [3]:水 [4]:青 [5]:黄 [6]:オレンジ [7]:赤 [8]:自由      
      int[] color = new int[9];

      for (int i = 0; i < N; i++) {
        if (a[i] < 400) {
          color[0]++;
        } else if (a[i] < 800) {
          color[1]++;
        } else if (a[i] < 1200) {
          color[2]++;
        } else if (a[i] < 1600) {
          color[3]++;
        } else if (a[i] < 2000) {
          color[4]++;
        } else if (a[i] < 2400) {
          color[5]++;
        } else if (a[i] < 2800) {
          color[6]++;
        } else if (a[i] < 3200) {
          color[7]++;
        } else {
          color[8]++;
        }
      }

      int min = 0;
      int max = 0;

      for (int i = 0; i < 8; i++) {
        if (color[i] != 0) {
          min++;
        }
      }

      max = min + color[8];

      if (min == 0){
        min = 1;
      }

      System.out.println(min + " " + max);

    }

  }

  ```
    