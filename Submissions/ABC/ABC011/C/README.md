### ABC014

# C - AtColor

  [問題はこちら](https://atcoder.jp/contests/abc014/tasks/abc014_3)

- 発想
  
  いもす法で解く。
  
  
- 実装のポイント

  1000000以上の要素をもつ配列は作れる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> number(1000010);
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      number[a]++;
      number[b+1]--;
    }

    int m = number[0];

    for (int i = 1; i < number.size(); i++) {
      number[i] += number[i - 1];
      m = max(m, number[i]);
    }

    cout << m << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int n = sc.nextInt();

      int[] v = new int[1000002];

      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        int b = sc.nextInt();
        v[a]++;
        v[b+1]--;
      }

      sc.close();

      int max = v[0];

      for (int i = 1; i < 1000002; i++) {
        v[i] = v[i] + v[i-1];
        max = Math.max(max, v[i]);
      }

      System.out.println(max);

    }

  }
  ```
    