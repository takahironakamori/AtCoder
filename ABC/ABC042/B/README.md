### ABC042

# B - 文字列大好きいろはちゃんイージー / Iroha Loves Strings (ABC Edition)

  [問題はこちら](https://atcoder.jp/contests/abc042/tasks/abc042_b)


- 発想<br>
  文字列を配列に入れて、配列を並び替えて、順番に出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, L;
    cin >> N >> L;

    vector<string> S(N);

    for (int i = 0; i < N; i++) {
      cin >> S[i];
    }

    sort(S.begin(), S.end());

    for (int i = 0; i < N; i++) {
      cout << S[i];
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
      int L = sc.nextInt();

      TreeMap<String, Integer> hashMap = new TreeMap<>();

      for (int i = 0; i < N; i++) {
        String s_ = sc.next();
        if (hashMap.containsKey(s_)) {
          Integer v_ = hashMap.get(s_);
          hashMap.put(s_,v_ + 1);
        } else { 
          hashMap.put(s_,1);
        }
      }

      sc.close();

      for (Map.Entry<String, Integer> map : hashMap.entrySet()) {
        for (int i = 0; i < map.getValue(); i++) {
          System.out.print(map.getKey());
        }
      }

      System.out.println("");

    }

  }
  ```
    