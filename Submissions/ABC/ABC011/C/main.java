import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    long N = sc.nextLong();
    long K = sc.nextLong();

    sc.close();

    long count = (N - K) * (K - 1) * 6 + (N - 1) * 3 + 1;
    
    double all = Math.pow(N, 3);

    double ans = (double)count / all;
    
    System.out.println(ans);
    
  }

}