### ABC085

# D - Katana Thrower

  [問題はこちら](https://atcoder.jp/contests/abc085/tasks/abc085_d)

- 発想<br>
  a_1 から a_N のうち最も大きいものを a_max とする。<br>
  b_1 から b_N うち値が a_max 以上の場合、H からその値を引き、その回数を数えておく。<br>
  H が 0 を超える場合は、残りの H を a_max で割った（切り上げ）値を回数に加えたものが回答となる。
 
 
- 実装のポイント<br>
　a については、最大値のみ使うので、わざわざ配列にする必要はない。
 

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, H;
    cin >> N >> H;

    vector<int> a(N);
    vector<int> b(N);

    for (int i = 0; i < N; i++) {
      cin >> a[i] >> b[i];
    }

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    int answer = 0;

    for (int i = 0; i < N; i++) {
      if (a[0] <= b[i] && 0 < H) {
        answer++;
        H -= b[i];
      } else {
        break;
      }
    }

    if (0 < H) {
      answer += ceil((double) H / a[0]);
    }

    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      
      int N = sc.nextInt();
      int H = sc.nextInt();
      
      Integer[] a = new Integer[N];
      Integer[] b = new Integer[N];
      
      for (int i = 0; i < N; i++) {
        a[i] = sc.nextInt();
        b[i] = sc.nextInt();
      }
      
      sc.close();

      Arrays.sort(a, Comparator.reverseOrder());
      Arrays.sort(b, Comparator.reverseOrder());

      int answer = 0;

      for (int i = 0; i < N; i++) {
        if (a[0] <= b[i] && 0 < H) {
          answer++;
          H -= b[i];
        } else {
          break;
        }
      }

      if (0 < H) {
        answer += Math.ceil((double) H / a[0]);
      }

      System.out.println(answer);

    }

  }
  ```
    