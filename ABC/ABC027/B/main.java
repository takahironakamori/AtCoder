import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    int[] a = new int[N];
    int sum = 0;

    for (int i = 0; i < N; i++) {
      a[i] = sc.nextInt();
      sum += a[i];
    }

    sc.close();

    if (sum % N != 0) {
      System.out.println(-1);
    } else {

      int count = 0;
      
      int average = sum / N;

      int current = 0;

      for (int i = 0; i < N; i++) {
        
        current += a[i];

        if ((i + 1) * average != current) {
          count++;
        }

      }

      System.out.println(count);
      
    }
  }

}