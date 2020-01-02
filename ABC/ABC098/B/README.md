### ABC098

# B - Cut and Count

  [問題はこちら](https://atcoder.jp/contests/abc098/tasks/abc098_b)


- 発想<br>
  S を 2 つに分割できる全てのパターンで同じ文字が何個使われているかを数える。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    string S;
    cin >> S;

    int answer = 0;

    string s1 = "";
    string s2 = "";

    vector<int> count1(26);
    vector<int> count2(26);

    for (int i = 1; i < N; i++) {
      s1 = S.substr(0, i);
      s2 = S.substr(i, N - i);
      count1.clear();
      count1.resize(26);
      count2.clear();
      count2.resize(26);
      int same = 0;
      for (int j = 0; j < s1.size(); j++) {
        count1[(int) s1[j] - 'a']++;
      }
      for (int j = 0; j < s2.size(); j++) {
        count2[(int) s2[j] - 'a']++;
      }
      for (int j = 0; j < 26; j++) {
        if (0 < count1[j] && 0 < count2[j]) {
          same++;
        }
      }
      answer = max(answer, same);
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
      String S = sc.next();

      sc.close();

      char[] s = S.toCharArray();

      int[] fArr = new int[26];
      int[] bArr = new int[26];

      int max = 0;

      for (int i = 0; i <= N; i++) {

        int count = 0;
        Arrays.fill(fArr, 0);
        Arrays.fill(bArr, 0);

        for (int j = 0; j < N; j++){
          if (j < i) {
            fArr[(int)s[j] - 97]++;
          } else {
            bArr[(int)s[j] - 97]++;
          }
        }

        for (int j = 0; j < 26; j++) {

          if (fArr[j] != 0 && bArr[j] != 0) {
            count++;
          }

        }

        max = Math.max(max, count);

      }

      System.out.println(max);

    }

  }
  ```
    