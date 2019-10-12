### ABC134

# D - Preparing Boxes

  [問題はこちら](https://atcoder.jp/contests/abc134/tasks/abc134_d)

- 発想<br>
  小さい数から考えると、1の倍数は、2、3、4 ... とあり、2、3、4 に入っているボールの個数はまだわかっていないので、やりにくい。<br>
  大きい数から考えると、ある数 i 以外の i の倍数が書かれた箱については、すでにボールを入れるか否かが決まっているか、箱そのものがない場合のどちらかなので、ボールの個数を計算することが容易。<br>
  ある数 i 以外の i の倍数が書かれた箱に入っているボールの個数の偶奇が a_i と異なる場合はボールを入れ、そうでない場合は入れない。<br>
  これを 1 まで続ける。<br>
  倍数の数値しか見てないため、計算量は O(N^2) ではなく、O(N log N) となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> a(N+1);

    for (int i = 1; i < N+1; i++) {
      cin >> a[i];
    }

    vector<int> b(N+1);

    for (int i = N; 1 <= i; i--) {
      int count = 0;
      for (int j = i; j <= N; j += i) {
        if (b[j] == 1) {
          count++;
        }
      }
      if (count % 2 == a[i]) {
        b[i] = 0;
      } else {
        b[i] = 1;
      }
    }

    vector<int> result;
    for (int i = 1; i < N+1; i++) {
      if (b[i] == 1) {
        result.push_back(i);
      }
    }

    cout << result.size() << endl;

    for (int i = 0; i < result.size(); i++) {
      cout << result[i];
      if (i != N) {
        cout << " ";
      }
    }

    cout << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();

      int[] a = new int[N+1];
      for (int i = 1; i < N+1; i++) {
        a[i] = sc.nextInt();
      }

      sc.close();

      int[] b = new int[N+1];
  
      for (int i = N; 1 <= i; i--) {
        int count = 0;
        for (int j = i; j <= N; j += i) {
          if (b[j] == 1) {
            count++;
          }
        }
        if (count % 2 == a[i]) {
          b[i] = 0;
        } else {
          b[i] = 1;
        }
      }

      Set<Integer> result = new TreeSet<Integer>();
      for (int i = 1; i < N+1; i++) {
        if (b[i] == 1) {
          result.add(i);
        }
      }

      System.out.println(result.size());

      int count = 0;
      for (Integer value : result) {
        count++;
        System.out.print(value);
        if (count != result.size()) {
          System.out.print(" ");
        } else {
          System.out.println("");
        }
      }

    }

  }
  ```
    