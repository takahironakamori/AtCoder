### ABC016

# C - 友達の友達

  [問題はこちら](https://atcoder.jp/contests/abc016/tasks/abc016_3)

- 発想<br>
  各ユーザーの友達を保持する。<br>
  ユーザーiの友達について、友達の友達を取得する。<br>
  友達の友達を取得するときに、ユーザーiかすでに取得した友達は除く。
  
- 実装のポイント<br>
　友達の友達は、タブる可能性があるので、C++ なら set、Java なら HashSet に追加してくだけでダブり取得を防ぐことができる。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    vector<set<int>> data(N);
    for (int i = 0; i < M; i++) {
      int a, b;
      cin >> a >> b;
      data[a-1].insert(b-1);
      data[b-1].insert(a-1);
    }

    for (int i = 0; i < N; i++) {
      set<int> answer;
      for (auto f : data[i]) {
        for (auto ff: data[f]) {
          if (ff != i && data[i].find(ff) == data[i].end()) {
            answer.insert(ff);
          }
        }
      }
      cout << answer.size() << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int M = sc.nextInt();
      int[] A = new int[M];
      int[] B = new int[M];
      List<Integer>[] list = new List[N];

      for (int i = 0; i < N; i++) {
        list[i] = new ArrayList<>();
      }

      for (int i = 0; i < M; i++) {
        A[i] = sc.nextInt() - 1;
        B[i] = sc.nextInt() - 1;
        list[A[i]].add(B[i]);
        list[B[i]].add(A[i]);
      }

      sc.close();

      for (int i = 0; i < N; i++) {
        Set<Integer> answer = new HashSet<Integer>();
        List<Integer> f = list[i]; 
        for (int j = 0; j < f.size(); j++) {
          List<Integer> ff = list[f.get(j)]; 
          for (int k = 0; k < ff.size(); k++) {
            if (ff.get(k) != i && f.contains(ff.get(k)) == false) {
              answer.add(ff.get(k));
            }
          }
        }

        System.out.println(answer.size());

      }

    }

  }
  ```
    