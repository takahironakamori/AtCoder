import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    long X = sc.nextLong();
    long Y = sc.nextLong();

    sc.close();

    long count = 0;
    long value = X;

    while (value <= Y) {
      value = value * 2;
      count++;
    }

    System.out.println(count);

  }

}