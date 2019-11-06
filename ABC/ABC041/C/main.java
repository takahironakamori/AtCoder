import java.util.*;
import java.io.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    Integer[][] a = new Integer[N][2];

    for (int i = 0; i < N; i++) {
      a[i][0] = i;
      a[i][1] = sc.nextInt();
    }

    sc.close();

    Arrays.sort(a, (a1,b1) -> Integer.compare(b1[1],a1[1]));
    
    PrintWriter out = new PrintWriter(System.out);

    for (int i = 0; i < N; i++) {
      out.println(a[i][0] + 1);
    }

    out.flush();

  }

}