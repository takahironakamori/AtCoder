import java.util.*;
import java.io.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int N = Integer.parseInt(sc.next());
    int[] a = new int[N];

    for (int i = 0; i < N; i++) {
      a[i] = Integer.parseInt(sc.next());
    }

    sc.close();

    TreeMap<Integer, Integer> map = new TreeMap<>();

    for (int i = 0; i < N; i++) {
      map.put(a[i],i);
    }

    int count = 0;
    for (Integer key : map.keySet()) {
      map.put(key,count);
      count++;
    }

    PrintWriter out = new PrintWriter(System.out);

    for (int i = 0; i < N; i++) {
      out.println(map.get(a[i]));
    }
    
    out.flush();

  }

}