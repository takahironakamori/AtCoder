import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();

    sc.close();

    int min = Integer.MAX_VALUE;

    for (int i = 1; i < 1000; i++) {
      for (int j = 1; j < 1000; j++) {
        int r = n - i * j;
        if (0 <= r) {
          int result = r + Math.abs(i - j);
          min = Math.min(min, result);
        }
      }
    }

    System.out.println(min);

  }

}