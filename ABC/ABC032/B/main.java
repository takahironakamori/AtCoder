import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    String s = sc.next();
    int k = sc.nextInt();

    sc.close();

    Set<String> hashSet = new HashSet<String>();

    if (k <= s.length()) {
      for (int i = 0; i < s.length() - k + 1; i++) {
        String s_ = s.substring(i, k + i);
        hashSet.add(s_);
      }
    }

    System.out.println(hashSet.size());

  }

}