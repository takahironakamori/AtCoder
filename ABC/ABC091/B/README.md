### ABC091

# B - Two Colors Card Game

  [問題はこちら](https://atcoder.jp/contests/abc091/tasks/abc091_b)


- 発想<br>
  map に s_1 から s_N までは 1 を加えて、<br>
  t_1 から t_N までは 1 減らす。<br>
  map の値の中から最大値を出力する。
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    map<string, int> mp;
    for (int i = 0; i < N; i++) {
      string s;
      cin >> s;
      mp[s]++;
    }

    int M;
    cin >> M;

    for (int i = 0; i < M; i++) {
      string t;
      cin >> t;
      mp[t]--;
    }

    int answer = 0;

    for (auto item:mp) {
      answer = max(answer, item.second);
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

      String[] s = new String[N];

      for (int i = 0; i < N; i++) {
        s[i] = sc.next();
      }

      int M = sc.nextInt();

      String[] t = new String[M];

      for (int i = 0; i < M; i++) {
        t[i] = sc.next();
      }

      sc.close();

      HashMap<String, Integer> map = new HashMap<String, Integer>();

      for (int i = 0; i < N; i++) {
        if (map.containsKey(s[i])) {
          int count = map.get(s[i]);
          map.put(s[i],count + 1);
        } else {
          map.put(s[i],1);
        }
      }

      for (int i = 0; i < M; i++) {
        if (map.containsKey(t[i])) {
          int count = map.get(t[i]);
          map.put(t[i],count - 1);
        } else {
          map.put(t[i],-1);
        }
      }

      int count = 0;

      Set<String> keys = map.keySet();

      for (int i = 0; i < keys.size(); i++) {
        String key = keys.toArray(new String[0])[i];
        count = Math.max(count, map.get(key));
      }

      System.out.println(count);

    }

  }
  ```
    