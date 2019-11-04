import java.util.*;
import java.io.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int N = Integer.parseInt(sc.next());
    int Q = Integer.parseInt(sc.next());
    int[] arr = new int[N + 1];

    for (int i = 0; i < Q; i++) {
      int l = Integer.parseInt(sc.next());
      int r = Integer.parseInt(sc.next());
      arr[l - 1]++;
      arr[r]--;
    }

    sc.close();

    for (int i = 1; i < N; i++) {
      arr[i] += arr[i - 1];
    }
    
    PrintWriter out = new PrintWriter(System.out);
    
    for (int i = 0; i < N; i++) {
      out.print(arr[i] % 2);
    }

    out.println("");

    out.flush();
    
  }

}