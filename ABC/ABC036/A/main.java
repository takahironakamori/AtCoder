import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    String[][] s = new String[N][N];

    for (int i = 0; i < N; i++) {
      String s_ = sc.next();
      s[i] = s_.split("");
    }

    sc.close();

    for (int i = 0; i < N; i++) {
      for (int j = N - 1; 0 <= j; j--) {
        System.out.print(s[j][i]);
      }
      System.out.println("");
    }

  }

}