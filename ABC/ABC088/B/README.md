### ABC088

# B - Card Game for Two

  [問題はこちら](https://atcoder.jp/contests/abc088/tasks/abc088_b)


- 発想<br>
  a_1 から a_N までを配列に入れ、大きい順に並び替える。<br>
  Alice と Bob は大きい値から交互に取るので、それぞれを計算して差を出力する。<br>
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> a(N);

    for (int i = 0; i < N; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end(), std::greater<int>());

    int Alice = 0;
    int Bob = 0;

    for (int i = 0; i < N; i++) {
      if (i % 2 == 0) {
        Alice += a[i];
      } else {
        Bob += a[i];
      }
    }

    cout << Alice - Bob << endl;

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

      Arrays.sort(a, Collections.reverseOrder());

      int Alice = 0;
      int Bob = 0;

      for (int i = 0; i < N; i++) {
        if (i % 2 == 0){
          Alice += a[i];
        } else {
          Bob += a[i];
        }
      }

      System.out.println(Alice - Bob);

    }

  }
  ```
    