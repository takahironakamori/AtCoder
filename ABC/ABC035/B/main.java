import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    String s = sc.next();
    int T = sc.nextInt();

    sc.close();

    String[] S = s.split("");
    int x = 0;
    int y = 0;
    int q = 0;

    for (int i = 0; i < S.length; i++) {
      if (S[i].equals("L")) {
        x--;
      } else if (S[i].equals("R")) {
        x++;
      } else if (S[i].equals("U")) {
        y++;
      } else if (S[i].equals("D")) {
        y--;
      } else if (S[i].equals("?")) {
        q++;
      }
    }

    if (T == 1) {
      System.out.println(Math.abs(x) + Math.abs(y) + q);
    } else {
      int a = Math.abs(x) + Math.abs(y);
      if (q <= a) {
        System.out.println(a - q);
      } else {
        System.out.println((q - a) % 2);
      }
      
    }

  }

}