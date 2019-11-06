### ABC045

# B - 3人でカードゲームイージー / Card Game for Three (ABC Edit)

  [問題はこちら](https://atcoder.jp/contests/abc045/tasks/abc045_b)

- 発想
  
  愚直にシミュレーションする。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string A, B, C;
    cin >> A >> B >> C;

    int currentA = 0;
    int currentB = 0;
    int currentC = 0;

    string turn = "a";
    string winner = "";

    while (winner == "") {
      if (turn == "a") {
        if (currentA == A.size()) {
          winner = "A";
        } else {
          turn = A.at(currentA);
          currentA++;
        }
      } else if (turn == "b") {
        if (currentB == B.size()) {
          winner = "B";
        } else {
          turn = B.at(currentB);
          currentB++;
        }
      } else {
        if (currentC == C.size()) {
          winner = "C";
        } else {
          turn = C.at(currentC);
          currentC++;
        }
      }
    }

    cout << winner << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner scanner = new Scanner(System.in);

      String sa = scanner.next();
      String sb = scanner.next();
      String sc = scanner.next();

      scanner.close();

      String[] SA = sa.split("");
      String[] SB = sb.split("");
      String[] SC = sc.split("");

      int currentSA = 0;
      int currentSB = 0;
      int currentSC = 0;

      // a:Aの番、b:Bの番、c:Cの番
      String turn = "a";

      String winner = "";

      while (winner.equals("")) {
        if (turn.equals("a")) {
          if (currentSA == SA.length){
            winner = "A";
          } else {
            turn = SA[currentSA];
            currentSA++;
          }
        } else if(turn.equals("b")) {
          if (currentSB == SB.length){
            winner = "B";
          } else {
            turn = SB[currentSB];
            currentSB++;
          }
        } else {
          if (currentSC == SC.length){
            winner = "C";
          } else {
            turn = SC[currentSC];
            currentSC++;
          }
        }
      }

      System.out.println(winner);

    }

  }
  ```
    