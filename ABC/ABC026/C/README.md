### ABC026

# C - 高橋君の給料

  [問題はこちら](https://atcoder.jp/contests/abc026/tasks/abc026_c)

- 発想<br>
  高橋君に遠い部下の給料が上司の給料に影響を与えるので、部下のいない社員の給料から順番に計算する。<br>
  自分より社員番号が大きい上司は存在しないので、Nが大きい順に見ていけばいい。
  
- 実装のポイント<br>
  各社員の部下が誰かを保持するための配列等を用意する。<br>
  各社員の給料を保持するための配列等を用意する。
  N が大きい順で給料を計算する。<br>
  部下の数が 0 の場合は、その人の給料は 1 。<br>
  部下の数が 1 の場合は、部下の給料 * 2 + 1 であるが、N が大きい順で調べていれば必ず部下の給料は適正に計算されている。<br>
  部下の数が 2 以上の場合は、最大と最小を調べて給料を計算する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> a(N + 1);
    for (int i = 2; i < N + 1; i++) {
      cin >> a[i];
    }

    vector<vector<int>> v(N + 1);
    for (int i = 2; i < N + 1; i++) {
      v[a[i]].push_back(i);
    }

    vector<long> salary(N + 1);

    for (int i = N; 0 < i; i--) {
      if (v[i].size() == 0) {
        salary[i] = 1;
      } else if (v[i].size() == 1) {
        salary[i] = salary[v[i][0]] * 2 + 1;
      } else {
        long max_ = salary[v[i][0]];
        long min_ = salary[v[i][0]];
        for (int j = 0; j < v[i].size(); j++) {
          max_ = max(max_, salary[v[i][j]]);
          min_ = min(min_, salary[v[i][j]]);
        }
        salary[i] = max_ + min_ + 1;
      }
    }

    cout << salary[1] << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int[] B = new int[N+1];

      for (int i = 2; i < N+1; i++) {
        B[i] = sc.nextInt();
      }

      sc.close();

      // 部下の数
      TreeMap<Integer, List> map = new TreeMap<>();

      // 部下の数を計算
      for (int i = 2; i < N+1; i++) {
        if (map.containsKey(B[i])) {
          List<Integer> list_ = map.get(B[i]);
          list_.add(i);
          map.put(B[i], list_);
        } else {
          List<Integer> list_ = new ArrayList<Integer>();
          list_.add(i);
          map.put(B[i], list_);
        }
      }

      // 社員の給料
      long[] salary = new long[N+1];

      // 社員の給料を計算
      for (int i = N; 0 < i; i--) {

        if (map.containsKey(i)) {
          List<Integer> list_ = map.get(i);
          if (1 == list_.size()) {
            salary[i] = salary[list_.get(0)] * 2 + 1;
          } else{
            long max = salary[list_.get(0)];
            long min = salary[list_.get(0)];
            for (int j = 1; j < list_.size(); j++) {
              max = Math.max(max, salary[list_.get(j)]);
              min = Math.min(min, salary[list_.get(j)]);
            }
            salary[i] = max + min + 1;
          }
        } else {
          salary[i] = 1;
        }
      }

      System.out.println(salary[1]);

    }

  }
  ```
    