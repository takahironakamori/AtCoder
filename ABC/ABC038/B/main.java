import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int H1 = sc.nextInt();
    int W1 = sc.nextInt();
    int H2 = sc.nextInt();
    int W2 = sc.nextInt();

    sc.close();

    String result = "NO";

    if (H1 == H2 || H1 == W2 || W1 == H2 || W1 == W2) {
      result = "YES";
    }

    System.out.println(result);

  }

}