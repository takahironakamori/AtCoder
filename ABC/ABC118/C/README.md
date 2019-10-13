### ABC118

# C - Monsters Battle Royale

  [問題はこちら](https://atcoder.jp/contests/abc118/tasks/abc118_c)

- 発想
  
  s は最大100、最小の m が1000000以下が保証されているので、シミュレーションでいける。<br>
  大きな配列を用意しておいて、array[計算した結果] が0（初期値）以外の数値になるまでの回数が答え。<br>
  配列で記憶するのもよし。Setをつかってもよし。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  long gcd(long a, long b) {

    if (b == 0) {
      return a;
    }
    return gcd(b, a % b);

  }

  int main() {

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    int g = A[0];

    for (int i = 1; i < N; i++) {
      g = gcd(g, A[i]);
    }

    cout << g << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int[] A = new int[N];

      for (int i = 0; i < N; i++) {
        A[i] = sc.nextInt();
      }

      sc.close();

      int gcd = gcd(A[0], A[1]);

      for (int i = 2; i < N-1; i++) {
        gcd = gcd(gcd, A[i]);
      }

      System.out.println(gcd);

    }

    public static int gcd(int a, int b){

      if (b == 0) {
        return a;
      }

      return gcd(b, a % b);

    }

  }
  ```
    