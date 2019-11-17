import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    String X = sc.next();

    sc.close();

    X = X.replaceAll("ch", "");
    X = X.replaceAll("o", "");
    X = X.replaceAll("k", "");
    X = X.replaceAll("u", "");

    if (X.length() == 0) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }

  }

}