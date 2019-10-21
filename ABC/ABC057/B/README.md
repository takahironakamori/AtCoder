### ABC057

# B - Checkpoints

  [問題はこちら](https://atcoder.jp/contests/abc057/tasks/abc057_b)

- 発想<br>
  それぞれの学生につき、M 個のチェックポイントのマンハッタン距離を計算し、最小のもののチェックポイントの番号を出力します。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> ab(N);
    for (int i = 0; i < N; i++) {
      cin >> ab[i].first >> ab[i].second;
    }

    vector<pair<int, int>> cd(M);
    for (int i = 0; i < M; i++) {
      cin >> cd[i].first >> cd[i].second;
    }

    vector<int> answer(N);

    for (int i = 0; i < N; i++) {
      answer[i] = 0;
      int minD = abs(ab[i].first - cd[0].first) + abs(ab[i].second - cd[0].second);
      for (int j = 1; j < M; j++) {
        int d = abs(ab[i].first - cd[j].first) + abs(ab[i].second - cd[j].second);
        if (d < minD){
          minD = d;
          answer[i] = j;
        }
      }
      cout << answer[i] + 1 << endl;
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

      // [i][0]: x1 位置 [i][1]: y1 位置
      int[][] student = new int[N][2];

      // [i][0]: x2 位置 [i][1]: y2 位置
      int[][] checkpoint = new int[M][2];

      for (int i = 0; i < N; i++) {
        student[i][0] = sc.nextInt();
        student[i][1] = sc.nextInt();
      }

      for (int i = 0; i < M; i++) {
        checkpoint[i][0] = sc.nextInt();
        checkpoint[i][1] = sc.nextInt();
      }

      sc.close();

      for (int i = 0; i < N; i++) {
        int min = Integer.MAX_VALUE;
        int n = Integer.MAX_VALUE;
        for (int j = 0; j < M; j++) {
          int d = Math.abs(student[i][0] - checkpoint[j][0]) + Math.abs(student[i][1] - checkpoint[j][1]);
          if (d < min){
            min = d;
            n = j + 1;
          }
        }
        System.out.println(n);
      }

    }

  }
  ```
    