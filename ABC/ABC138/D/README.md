### ABC138

# D - Ki

  [問題はこちら](https://atcoder.jp/contests/abc138/tasks/abc138_d)

- 発想<br>
  木の問題。<br>
  頂点 i について繋がっている頂点を調べる。<br>
  各頂点のカウンターを集計しておく。<br>
  0 から順番にカウンターを集計していく。<br>
  親から子へカウンターの数値を足し合わしてくイメージ。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  vector<bool> visited;
  vector<set<int>> tree;
  vector<int> point;

  void dfs(int parent) {

    visited[parent] = true;

    for (int i_ : tree[parent]) {
      if (!visited[i_]) {
        point[i_] += point[parent];
        dfs(i_);
      }
    }

  }

  int main() {

    int N, Q;
    cin >> N >> Q;

    tree.resize(N);
    visited.resize(N);
    point.resize(N);

    for (int i = 0; i < N - 1; i++) {
      int a, b;
      cin >> a >> b;
      tree[a - 1].insert(b - 1);
      tree[b - 1].insert(a - 1);
    }

    for (int i = 0; i < Q; i++) {
      int p, x;
      cin >> p >> x;
      point[p - 1] += x;
    }

    dfs(0);

    for (int i = 0; i < N; i++) {
      cout << point[i] << " ";
    }

    cout << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  import java.io.*;

  public class Main {

    static boolean[] visited;
    static int[] point;
    static List<Integer>[] tree;

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int Q = sc.nextInt();
      visited = new boolean[N];
      point = new int[N];
      tree = new List[N];

      for (int i = 0; i < N; i++) {
        tree[i] = new ArrayList<>();
      }

      for (int i = 0; i < N - 1; i++) {
        int a = sc.nextInt() - 1;
        int b = sc.nextInt() - 1;
        tree[a].add(b);
        tree[b].add(a);
      }

      for (int i = 0; i < Q; i++) {
        int p = sc.nextInt() - 1;
        int x = sc.nextInt();
        point[p] += x;
      }

      sc.close();

      dfs(0);

      PrintWriter out = new PrintWriter(System.out);

      out.print(point[0]);

      for (int i = 1; i < N; i++) {
        out.print(" ");
        out.print(point[i]);
      }

      out.println("");

      out.flush();

    }

    static void dfs(int parent) {

      visited[parent] = true;

      List<Integer> next_ = tree[parent];

      for (int id_ : next_) {
        if (!visited[id_]) {
          point[id_] += point[parent];
          dfs(id_);
        }
      }

    }

  }
  ```
    