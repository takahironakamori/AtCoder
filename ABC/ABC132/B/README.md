### ABC132

# A - Fifty-Fifty

  [問題はこちら](https://atcoder.jp/contests/abc132/tasks/abc132_a)


- 発想<br>
  p\[i + 1]、p\[i]、p\[i + 1]が、<br>
  p\[i] < p\[i + 1] かつ p\[i - 1] < p\[i]、または<br>
  p\[i] < p\[i - 1] かつ p\[i + 1] < p\[i]、を満たす数を数える。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> p(n);

    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }

    int answer = 0;

    for (int i = 1; i < n-1; i++) {
      if (p[i] < p[i + 1] && p[i - 1] < p[i]) {
        answer++; 
      } else if (p[i] < p[i - 1] && p[i + 1] < p[i]){
        answer++;
      }
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
      int n = sc.nextInt();
      int[] p = new int[n];

      for (int i = 0; i < n; i++) {
        p[i] = sc.nextInt();
      }
      sc.close();

      int count = 0;

      for(int i=1; i<n-1; i++){
        int p1 = p[i-1];
        int p2 = p[i];
        int p3 = p[i+1];
        if ((p1 < p2) && (p2 < p3)){
          count++;
        } else if ((p3 < p2) && (p2 < p1)) {
          count++;
        }
      }

      System.out.println(count);

    }

  }
  ```
    