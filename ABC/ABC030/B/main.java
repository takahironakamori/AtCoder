import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int m = sc.nextInt();

    sc.close();

    if (12 <= n) {
      n = n - 12;
    }

    double H = n * 30 + m * 0.5;
    double M = m * 6;

    double res = Math.abs(H - M);

    if (180 < res) {
      res = 360 - res;
    }
    
    System.out.println(res);

  }

}