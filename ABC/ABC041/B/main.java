import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    long A = sc.nextLong();
    long B = sc.nextLong();
    long C = sc.nextLong();

    sc.close();

    long mod = 1000000007;

    long s = (A * B) % mod;

    s = (s * C) % mod;

    System.out.println(s);

  }

}