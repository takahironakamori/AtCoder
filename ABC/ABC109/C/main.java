import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    int X = sc.nextInt();

    int[] x = new int[N];

    for (int i = 0; i < N; i++) {
      x[i] = sc.nextInt();
    }

    sc.close();

    long g = Math.abs(x[0] - X);

    for (int i = 1; i < N; i++) {
       g = gcd(g, Math.abs(x[i] - X));
    }

    System.out.println(g);

  }

  static long gcd(long a, long b) {

    if (b == 0) {
      return a;
    }

    return gcd(b, a % b);

  }

}