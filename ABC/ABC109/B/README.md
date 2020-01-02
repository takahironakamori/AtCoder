### ABC109

# B - Shiritori

  [問題はこちら](https://atcoder.jp/contests/abc109/tasks/abc109_b)


- 発想<br>
  使った言葉は set に入れる。<br>
  最後の文字を変数で保持して、最初の文字と一致しているかを判定する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<string> W(N);
    for (int i = 0; i < N; i++) {
      cin >> W[i];
    }

    string answer = "Yes";
    set<string> st;
    char ls;

    st.insert(W[0]);
    ls = W[0][W[0].size()-1];

    for (int i = 1; i < N; i++) {
      if (st.find(W[i]) == st.end()) {
        if (ls == W[i][0]) {
          st.insert(W[i]);
          ls = W[i][W[i].size()-1];
        } else {
          answer = "No";
          break;
        }
      } else {
        answer = "No";
        break;
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

      int N = sc.nextInt();
      String[] W = new String[N];

      for (int i = 0; i < N; i++) {
        W[i] = sc.next();
      }

      sc.close();

      String result = "Yes";

      for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
          if (W[i].equals(W[j])) {
            result = "No";
            break;
          }
        }
        if (result == "No") {
          break;
        }
      }

      String start = "";

      if (result == "Yes") {
        for (int i = 0; i < N; i++) {
          if (i != 0) {
            String[] s_ = W[i].split("");
            if (s_[0].equals(start)) {
              start = s_[s_.length - 1];
            } else {
              result = "No";
              break;
            }
          } else {
            String[] s_ = W[i].split("");
            start = s_[s_.length - 1];
          }
        } 
      }

      System.out.println(result);

    }

  }
  ```
    