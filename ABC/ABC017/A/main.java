import java.util.*;
public class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int s1 = sc.nextInt();
    int e1 = sc.nextInt();
    int s2 = sc.nextInt();
    int e2 = sc.nextInt();
    int s3 = sc.nextInt();
    int e3 = sc.nextInt();
    int sum = 0;
    sum = s1 * e1 / 10 + sum;
    sum = s2 * e2 / 10 + sum;
    sum = s3 * e3 / 10 + sum;
    System.out.println(sum);
  }
}