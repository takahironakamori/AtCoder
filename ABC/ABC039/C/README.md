### ABC039

# C - ピアニスト高橋君

  [問題はこちら](https://atcoder.jp/contests/abc039/tasks/abc039_c)

- 発想<br>
  ドの場合は、WBWBWWBWBWBW<br>
  レの場合は、WBWWBWBWBWWB<br>
  ミの場合は、WWBWBWBWWBWB<br>
  ファの場合は、WBWBWBWWBWBW<br>
  ソの場合は、WBWBWWBWBWWB<br>
  ラの場合は、WBWWBWBWWBWB<br>
  シの場合は、WWBWBWWBWBWB<br>
  と 12 文字まで見てくと、ダブりが出なくなる。<br>
  別に 7 パターンしかないので、 20 文字全部洗い出してもいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    string s = S.substr(0,12);

    if (s == "WBWBWWBWBWBW") {
      cout << "Do" << endl;
    } else if (s == "WBWWBWBWBWWB")  {
      cout << "Re" << endl;
    } else if (s == "WWBWBWBWWBWB")  {
      cout << "Mi" << endl;
    } else if (s == "WBWBWBWWBWBW")  {
      cout << "Fa" << endl;
    } else if (s == "WBWBWWBWBWWB")  {
      cout << "So" << endl;
    } else if (s == "WBWWBWBWWBWB")  {
      cout << "La" << endl;
    } else if (s == "WWBWBWWBWBWB")  {
      cout << "Si" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String s = sc.next();

      sc.close();

      String S = s.substring(0,12);

      String[] patterns = {"WBWBWWBWBWBW", "WBWWBWBWBWWB", "WWBWBWBWWBWB", "WBWBWBWWBWBW", "WBWBWWBWBWWB", "WBWWBWBWWBWB", "WWBWBWWBWBWB"};

      String[] musicalScale = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};

      for (int i = 0; i < 7; i++) {
        if (S.equals(patterns[i])){
          System.out.println(musicalScale[i]);
          break;
        }
      }

    }

  }
  ```
    